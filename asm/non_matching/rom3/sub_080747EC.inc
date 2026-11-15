	THUMB_FUNC_START sub_080747EC
sub_080747EC: @ 0x080747EC
	push {lr}
	ldr r1, _08074808  @ =gUnknown_0814D68C
	ldr r0, _0807480C  @ =gRam
	ldr r2, _08074810  @ =0x000009E8
	add r0, r0, r2
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074808:
	.4byte gUnknown_0814D68C
_0807480C:
	.4byte gRam
_08074810:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080747EC

