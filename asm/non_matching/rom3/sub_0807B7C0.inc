	THUMB_FUNC_START sub_0807B7C0
sub_0807B7C0: @ 0x0807B7C0
	push {r4,lr}
	mov r0, #0
	bl sub_080CAFB4
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B7F6
	ldr r4, _0807B7FC  @ =gUnknown_03002734
	mov r0, #123
	add r1, r4, #0
	bl sub_0812A324
	ldr r0, _0807B800  @ =0x000004A9
	add r1, r4, r0
	mov r2, #0
	mov r0, #28
	strb r0, [r1]
	mov r1, #143
	lsl r1, r1, #3
	add r0, r4, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	ldr r1, _0807B804  @ =0x000004E2
	add r4, r4, r1
	add r0, r0, r4
	strb r2, [r0]
_0807B7F6:
	pop {r4}
	pop {r0}
	bx r0
_0807B7FC:
	.4byte gUnknown_03002734
_0807B800:
	.4byte 0x000004A9
_0807B804:
	.4byte 0x000004E2
	THUMB_FUNC_END sub_0807B7C0

