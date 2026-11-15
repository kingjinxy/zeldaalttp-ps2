	THUMB_FUNC_START sub_080C0AE8
sub_080C0AE8: @ 0x080C0AE8
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	mov r6, #0
	add r0, r4, #0
	bl sub_080C0D58
	add r0, r5, #0
	bl sub_080C4574
	bl sub_080C466C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080C0B74
	ldr r2, _080C0B50  @ =gRam
	ldr r1, _080C0B54  @ =0x00000D84
	add r0, r2, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080C0B42
	ldr r1, _080C0B58  @ =0x00000E15
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	bne _080C0B42
	ldr r1, _080C0B5C  @ =0x00000FF2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #27
	bne _080C0B6E
	ldr r0, _080C0B60  @ =gBow
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080C0B64
	add r0, r4, #0
	bl sub_080CA1BC
_080C0B42:
	add r0, r4, #0
	add r1, r5, #0
	bl sub_080C0B7C
	lsl r0, r0, #24
	lsr r6, r0, #24
	b _080C0B74
_080C0B50:
	.4byte gRam
_080C0B54:
	.4byte 0x00000D84
_080C0B58:
	.4byte 0x00000E15
_080C0B5C:
	.4byte 0x00000FF2
_080C0B60:
	.4byte gBow
_080C0B64:
	add r0, r4, #0
	add r1, r5, #0
	bl sub_080C0B7C
	b _080C0B74
_080C0B6E:
	add r0, r4, #0
	bl sub_080CA1BC
_080C0B74:
	add r0, r6, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C0AE8

