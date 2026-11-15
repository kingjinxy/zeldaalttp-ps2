	THUMB_FUNC_START sub_0810C2F4
sub_0810C2F4: @ 0x0810C2F4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _0810C350  @ =gRam
	ldr r1, _0810C354  @ =0x00000EE2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _0810C358  @ =0x00000F02
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r4, _0810C35C  @ =0x00000968
	add r0, r3, r4
	ldrh r0, [r0]
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _0810C36C
	ldr r1, _0810C360  @ =0x00000ED2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r4, _0810C364  @ =0x00000EF2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _0810C368  @ =0x0000096C
	add r0, r3, r2
	ldrh r0, [r0]
	lsl r1, r1, #16
	asr r1, r1, #16
	sub r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _0810C36C
	mov r0, #1
	b _0810C36E
_0810C350:
	.4byte gRam
_0810C354:
	.4byte 0x00000EE2
_0810C358:
	.4byte 0x00000F02
_0810C35C:
	.4byte 0x00000968
_0810C360:
	.4byte 0x00000ED2
_0810C364:
	.4byte 0x00000EF2
_0810C368:
	.4byte 0x0000096C
_0810C36C:
	mov r0, #0
_0810C36E:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0810C2F4

