	THUMB_FUNC_START sub_080D7930
sub_080D7930: @ 0x080D7930
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D7956
	b _080D7A78
_080D7956:
	ldr r3, _080D79EC  @ =gRam
	ldr r0, _080D79F0  @ =0x000015E8
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #32
	strb r0, [r1]
	ldr r2, _080D79F4  @ =0x000015E9
	add r1, r3, r2
	ldrb r0, [r1]
	sub r0, r0, #32
	strb r0, [r1]
	ldr r4, _080D79F8  @ =0x00001052
	add r0, r3, r4
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D7A10
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r4, #15
	add r6, sp, #4
	mov r10, r1
	ldr r0, _080D79FC  @ =gUnknown_081756C0
	add r0, r7, r0
	ldrb r0, [r0]
	mov r9, r0
_080D798C:
	ldr r0, _080D7A00  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080D79EC  @ =gRam
	ldr r3, _080D79F0  @ =0x000015E8
	add r1, r2, r3
	ldrb r1, [r1]
	ldr r2, _080D7A04  @ =gUnknown_081756A0
	lsl r5, r4, #24
	asr r5, r5, #24
	add r2, r5, r2
	ldrb r2, [r2]
	add r1, r1, r2
	mov r4, r10
	ldrb r2, [r4]
	ldr r3, _080D7A08  @ =gUnknown_081756B0
	add r3, r5, r3
	ldrb r3, [r3]
	add r2, r2, r3
	ldr r3, _080D7A0C  @ =gUnknown_081756C6
	add r3, r7, r3
	ldrb r3, [r3]
	lsl r3, r3, #8
	add r3, r3, r9
	lsl r3, r3, #16
	mov r4, #2
	str r4, [sp]
	lsr r3, r3, #16
	bl sub_080C6004
	sub r5, r5, #1
	lsl r5, r5, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r4, r5, #24
	cmp r5, #0
	bge _080D798C
	mov r0, r8
	mov r1, #2
	mov r2, #15
	bl sub_080C6350
	b _080D7A78
	.byte 0x00
	.byte 0x00
_080D79EC:
	.4byte gRam
_080D79F0:
	.4byte 0x000015E8
_080D79F4:
	.4byte 0x000015E9
_080D79F8:
	.4byte 0x00001052
_080D79FC:
	.4byte gUnknown_081756C0
_080D7A00:
	.4byte gUnknown_03003E74
_080D7A04:
	.4byte gUnknown_081756A0
_080D7A08:
	.4byte gUnknown_081756B0
_080D7A0C:
	.4byte gUnknown_081756C6
_080D7A10:
	mov r0, #150
	lsl r0, r0, #4
	add r2, r3, r0
	ldrh r0, [r2]
	sub r0, r0, #32
	strh r0, [r2]
	ldr r4, _080D7A88  @ =0x00000964
	add r1, r3, r4
	ldrh r0, [r1]
	sub r0, r0, #32
	strh r0, [r1]
	mov r5, #0
	add r6, sp, #4
	mov r7, #3
	mov r9, r1
	mov r8, r2
_080D7A30:
	ldr r0, _080D7A8C  @ =gUnknown_03003E74
	ldrb r1, [r6]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	and r1, r1, r7
	lsl r1, r1, #4
	mov r2, r8
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	asr r2, r5, #2
	and r2, r2, r7
	lsl r2, r2, #4
	mov r3, r9
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r4, _080D7A90  @ =gUnknown_081756CC
	lsl r3, r5, #1
	add r3, r3, r4
	ldrh r3, [r3]
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add r5, r5, #1
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	cmp r5, #15
	ble _080D7A30
_080D7A78:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080D7A88:
	.4byte 0x00000964
_080D7A8C:
	.4byte gUnknown_03003E74
_080D7A90:
	.4byte gUnknown_081756CC
	THUMB_FUNC_END sub_080D7930

