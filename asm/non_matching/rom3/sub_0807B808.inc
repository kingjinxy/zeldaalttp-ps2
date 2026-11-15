	THUMB_FUNC_START sub_0807B808
sub_0807B808: @ 0x0807B808
	push {lr}
	ldr r0, _0807B824  @ =gRam
	ldr r1, _0807B828  @ =0x000016C1
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0807B81E
	bl sub_0807B43C
_0807B81E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B824:
	.4byte gRam
_0807B828:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_0807B808

