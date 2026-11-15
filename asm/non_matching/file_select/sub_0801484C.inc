	THUMB_FUNC_START sub_0801484C
sub_0801484C: @ 0x0801484C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r1, r1, #24
	cmp r1, #0
	bne _08014876
	ldr r4, _080148B4  @ =gUnknown_0200B324
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl zero_memory
	mov r0, #128
	lsl r0, r0, #6
	add r4, r4, r0
	mov r1, #128
	lsl r1, r1, #5
	add r0, r4, #0
	bl zero_memory
_08014876:
	ldr r7, _080148B8  @ =0x04000004
	mov r0, #1
	mov r8, r0
_0801487C:
	ldr r4, [r5, #4]
	ldr r2, [r5]
	add r6, r5, #0
	add r6, r6, #12
_08014884:
	ldrh r1, [r7]
	mov r0, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08014884
	add r3, r4, #0
	cmp r3, #0
	beq _080148DC
	ldr r0, _080148BC  @ =gUnknown_03000BA4
	ldr r1, _080148C0  @ =0x7FFFFFFF
	and r2, r2, r1
	ldr r0, [r0]
	add r1, r0, r2
	ldr r0, [r5, #8]
	cmp r0, #0
	bge _080148CE
	lsr r0, r3, #24
	cmp r0, #6
	bne _080148C4
	add r0, r1, #0
	add r1, r3, #0
	bl LZ77UnCompVram
	b _080148E6
_080148B4:
	.4byte gUnknown_0200B324
_080148B8:
	.4byte 0x04000004
_080148BC:
	.4byte gUnknown_03000BA4
_080148C0:
	.4byte 0x7FFFFFFF
_080148C4:
	add r0, r1, #0
	add r1, r3, #0
	bl LZ77UnCompWram
	b _080148E6
_080148CE:
	lsl r2, r0, #10
	lsr r2, r2, #11
	add r0, r1, #0
	add r1, r4, #0
	bl CpuSet
	b _080148E6
_080148DC:
	ldr r0, _080148FC  @ =0x7FFFFFFF
	and r2, r2, r0
	add r0, r2, #0
	bl load_palette_from_gfx_group
_080148E6:
	add r5, r6, #0
	add r0, r5, #0
	sub r0, r0, #12
	ldr r0, [r0]
	cmp r0, #0
	blt _0801487C
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080148FC:
	.4byte 0x7FFFFFFF
	THUMB_FUNC_END sub_0801484C

