	THUMB_FUNC_START sub_0811EDE0
sub_0811EDE0: @ 0x0811EDE0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811EE44  @ =gRam
	ldr r2, _0811EE48  @ =0x00000DCF
	add r1, r3, r2
	add r1, r0, r1
	ldrb r2, [r1]
	ldr r4, _0811EE4C  @ =0x00000DE3
	add r1, r3, r4
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	ldr r5, _0811EE50  @ =0x00000952
	add r1, r3, r5
	ldrh r1, [r1]
	sub r2, r2, r1
	lsl r2, r2, #16
	lsr r4, r2, #16
	ldr r2, _0811EE54  @ =0x00000DC5
	add r1, r3, r2
	add r1, r0, r1
	ldrb r1, [r1]
	ldr r5, _0811EE58  @ =0x00000DD9
	add r2, r3, r5
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _0811EE5C  @ =0x00000958
	add r3, r3, r0
	ldrh r0, [r3]
	sub r1, r1, r0
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r2, #10
	neg r2, r2
	cmp r1, r2
	ble _0811EE60
	cmp r1, #159
	bgt _0811EE60
	lsl r0, r4, #16
	asr r0, r0, #16
	cmp r0, r2
	ble _0811EE60
	cmp r0, #239
	bgt _0811EE60
	mov r0, #1
	b _0811EE62
_0811EE44:
	.4byte gRam
_0811EE48:
	.4byte 0x00000DCF
_0811EE4C:
	.4byte 0x00000DE3
_0811EE50:
	.4byte 0x00000952
_0811EE54:
	.4byte 0x00000DC5
_0811EE58:
	.4byte 0x00000DD9
_0811EE5C:
	.4byte 0x00000958
_0811EE60:
	mov r0, #0
_0811EE62:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0811EDE0

