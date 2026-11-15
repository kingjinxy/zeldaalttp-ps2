	THUMB_FUNC_START sub_0807B82C
sub_0807B82C: @ 0x0807B82C
	push {lr}
	ldr r0, _0807B848  @ =gRam
	ldr r1, _0807B84C  @ =0x000016C1
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0807B842
	bl sub_0807B43C
_0807B842:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B848:
	.4byte gRam
_0807B84C:
	.4byte 0x000016C1
	THUMB_FUNC_END sub_0807B82C

