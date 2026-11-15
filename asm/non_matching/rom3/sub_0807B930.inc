	THUMB_FUNC_START sub_0807B930
sub_0807B930: @ 0x0807B930
	push {lr}
	ldr r0, _0807B94C  @ =gRam
	ldr r1, _0807B950  @ =0x000016C5
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0807B946
	bl sub_0807B43C
_0807B946:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B94C:
	.4byte gRam
_0807B950:
	.4byte 0x000016C5
	THUMB_FUNC_END sub_0807B930

