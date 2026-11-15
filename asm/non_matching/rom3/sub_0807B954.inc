	THUMB_FUNC_START sub_0807B954
sub_0807B954: @ 0x0807B954
	push {lr}
	ldr r0, _0807B970  @ =gRam
	ldr r1, _0807B974  @ =0x000016C5
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807B96A
	bl sub_0807B43C
_0807B96A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B970:
	.4byte gRam
_0807B974:
	.4byte 0x000016C5
	THUMB_FUNC_END sub_0807B954

