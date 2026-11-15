	THUMB_FUNC_START sub_080B7B40
sub_080B7B40: @ 0x080B7B40
	sub sp, sp, #16
	push {r4-r7,lr}
	sub sp, sp, #4
	str r0, [sp, #24]
	str r1, [sp, #28]
	str r2, [sp, #32]
	str r3, [sp, #36]
	add r0, sp, #24
	ldrb r1, [r0, #4]
	ldr r7, _080B7BC0  @ =gUnknown_03003E74
	ldr r6, _080B7BC4  @ =gUnknown_0200688A
_080B7B56:
	ldrb r0, [r6]
	lsl r0, r0, #2
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	asr r0, r0, #2
	strh r0, [r7]
	ldrh r0, [r7]
	lsl r5, r1, #24
	asr r5, r5, #24
	ldr r2, [sp, #36]
	add r2, r2, r5
	add r1, sp, #24
	ldrh r1, [r1]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, [sp, #40]
	add r3, r3, r5
	add r2, sp, #24
	ldrh r2, [r2, #2]
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, [sp, #44]
	add r3, r3, r5
	ldrb r3, [r3]
	ldr r4, [sp, #48]
	add r4, r4, r5
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, [sp, #32]
	add r4, r4, r5
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	sub r5, r5, #1
	lsl r5, r5, #24
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	lsr r1, r5, #24
	cmp r5, #0
	bge _080B7B56
	add sp, sp, #4
	pop {r4-r7}
	pop {r3}
	add sp, sp, #16
	bx r3
_080B7BC0:
	.4byte gUnknown_03003E74
_080B7BC4:
	.4byte gUnknown_0200688A
	.byte 0x70
	.byte 0xB5
	.byte 0x56
	.byte 0x46
	.byte 0x4D
	.byte 0x46
	.byte 0x44
	.byte 0x46
	.byte 0x70
	.byte 0xB4
	.byte 0x81
	.byte 0xB0
	.byte 0x1E
	.byte 0x48
	.byte 0x82
	.byte 0x46
	.byte 0x1E
	.byte 0x4D
	.byte 0x28
	.byte 0x78
	.byte 0x80
	.byte 0x00
	.byte 0x80
	.byte 0x21
	.byte 0x49
	.byte 0x00
	.byte 0x40
	.byte 0x18
	.byte 0x80
	.byte 0x10
	.byte 0x41
	.byte 0x1C
	.byte 0x52
	.byte 0x46
	.byte 0x11
	.byte 0x80
	.byte 0x1A
	.byte 0x4B
	.byte 0x99
	.byte 0x46
	.byte 0x1A
	.byte 0x49
	.byte 0x0A
	.byte 0x1C
	.byte 0x1B
	.byte 0x78
	.byte 0xD2
	.byte 0x18
	.byte 0x12
	.byte 0x04
	.byte 0x12
	.byte 0x0C
	.byte 0x18
	.byte 0x49
	.byte 0x88
	.byte 0x46
	.byte 0x0B
	.byte 0x78
	.byte 0x18
	.byte 0x4E
	.byte 0x31
	.byte 0x78
	.byte 0x09
	.byte 0x02
	.byte 0x0B
	.byte 0x43
	.byte 0x02
	.byte 0x24
	.byte 0x00
	.byte 0x94
	.byte 0x6C
	.byte 0x21
	.byte 0x0E
	.byte 0xF0
	.byte 0xAA
	.byte 0xFB
	.byte 0x52
	.byte 0x46
	.byte 0x10
	.byte 0x88
	.byte 0x13
	.byte 0x4B
	.byte 0x1A
	.byte 0x1C
	.byte 0x49
	.byte 0x46
	.byte 0x09
	.byte 0x78
	.byte 0x52
	.byte 0x18
	.byte 0x12
	.byte 0x04
	.byte 0x12
	.byte 0x0C
	.byte 0x41
	.byte 0x46
	.byte 0x4B
	.byte 0x78
	.byte 0x71
	.byte 0x78
	.byte 0x09
	.byte 0x02
	.byte 0x0B
	.byte 0x43
	.byte 0x00
	.byte 0x94
	.byte 0x6C
	.byte 0x21
	.byte 0x0E
	.byte 0xF0
	.byte 0x98
	.byte 0xFB
	.byte 0x28
	.byte 0x78
	.byte 0x02
	.byte 0x30
	.byte 0x28
	.byte 0x70
	.byte 0x01
	.byte 0xB0
	.byte 0x38
	.byte 0xBC
	.byte 0x98
	.byte 0x46
	.byte 0xA1
	.byte 0x46
	.byte 0xAA
	.byte 0x46
	.byte 0x70
	.byte 0xBC
	.byte 0x01
	.byte 0xBC
	.byte 0x00
	.byte 0x47
	THUMB_FUNC_END sub_080B7B40

	.byte 0x00
	.byte 0x00
