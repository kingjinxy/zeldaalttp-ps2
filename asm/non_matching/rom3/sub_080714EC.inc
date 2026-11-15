	THUMB_FUNC_START sub_080714EC
sub_080714EC: @ 0x080714EC
	push {lr}
	ldr r0, _08071514  @ =gRam
	ldr r1, _08071518  @ =0x000009E8
	add r0, r0, r1
	ldrh r1, [r0]
	add r2, r1, #1
	strh r2, [r0]
	mov r0, #3
	and r0, r0, r2
	cmp r0, #0
	bne _08071510
	ldr r0, _0807151C  @ =gUnknown_0814CD8C
	ldr r1, _08071520  @ =0x0000FFFC
	and r2, r2, r1
	add r0, r2, r0
	ldr r0, [r0]
	bl _call_via_r0
_08071510:
	pop {r0}
	bx r0
_08071514:
	.4byte gRam
_08071518:
	.4byte 0x000009E8
_0807151C:
	.4byte gUnknown_0814CD8C
_08071520:
	.4byte 0x0000FFFC
	THUMB_FUNC_END sub_080714EC

