	THUMB_FUNC_START sub_08107368
sub_08107368: @ 0x08107368
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r6, #0
	bl sub_080C632C
	lsl r0, r0, #24
	cmp r0, #0
	bne _081073B8
	add r0, r6, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _081073B8
	ldr r0, _081073C0  @ =gRam
	ldr r1, _081073C4  @ =0x00000F22
	add r4, r0, r1
	add r4, r6, r4
	ldrb r5, [r4]
	add r1, r1, #96
	add r0, r0, r1
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r5, r0
	strb r0, [r4]
	add r0, r6, #0
	bl Sprite3_Move
	strb r5, [r4]
	add r0, r6, #0
	bl sub_081073C8
	add r0, r6, #0
	bl sub_081070A4
_081073B8:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_081073C0:
	.4byte gRam
_081073C4:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_08107368

