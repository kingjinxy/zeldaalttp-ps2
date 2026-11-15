	THUMB_FUNC_START sub_08024A80
sub_08024A80: @ 0x08024A80
	push {r4,r5,lr}
	add r3, r0, #0
	add r5, r1, #0
	add r2, r3, #0
	add r2, r2, #110
	ldrh r0, [r2]
	mov r1, #1
	mov r4, #0
	orr r1, r1, r0
	strh r1, [r2]
	add r1, r3, #0
	add r1, r1, #69
	ldr r0, [r5, #76]
	add r0, r0, #68
	ldrb r2, [r1]
	ldrb r0, [r0]
	cmp r2, r0
	bcs _08024AA8
	strb r4, [r1]
	b _08024AAC
_08024AA8:
	sub r0, r2, r0
	strb r0, [r1]
_08024AAC:
	ldr r0, [r5, #76]
	add r0, r0, #70
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08024AC4
	neg r0, r1
	add r1, r0, #0
	sub r1, r1, #16
	b _08024AC6
_08024AC4:
	add r1, r1, #16
_08024AC6:
	add r0, r3, #0
	add r0, r0, #61
	strb r1, [r0]
	ldr r0, [r3, #112]
	add r0, r0, #61
	strb r1, [r0]
	mov r0, #45
	bl 0x08003DFC
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024A80

	.byte 0x00
	.byte 0x00
