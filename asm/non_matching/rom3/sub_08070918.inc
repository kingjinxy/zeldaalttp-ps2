	THUMB_FUNC_START sub_08070918
sub_08070918: @ 0x08070918
	push {lr}
	ldr r0, _08070940  @ =gRam
	ldr r2, _08070944  @ =0x00000AB2
	add r1, r0, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _0807093A
	ldrh r0, [r1]
	cmp r0, #2
	bne _0807092E
	mov r0, #0
_0807092E:
	asr r0, r0, #1
	ldr r1, _08070948  @ =gUnknown_0200235C
	add r0, r0, r1
	sub r1, r1, #13
	ldrb r1, [r1]
	strb r1, [r0]
_0807093A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070940:
	.4byte gRam
_08070944:
	.4byte 0x00000AB2
_08070948:
	.4byte gUnknown_0200235C
	THUMB_FUNC_END sub_08070918

