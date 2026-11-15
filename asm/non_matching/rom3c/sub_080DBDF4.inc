	THUMB_FUNC_START sub_080DBDF4
sub_080DBDF4: @ 0x080DBDF4
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080DBE78  @ =gRam
	ldr r1, _080DBE7C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	bne _080DBE30
	ldr r2, _080DBE80  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #3
	bne _080DBE28
	mov r1, #2
_080DBE28:
	ldr r2, _080DBE84  @ =0x00001082
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
_080DBE30:
	ldr r1, _080DBE88  @ =0x00001122
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080E67E8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DBE6E
	add r0, r4, #0
	bl sub_080C5080
	mov r1, #186
	lsl r1, r1, #1
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	ldr r2, _080DBE80  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
_080DBE6E:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DBE78:
	.4byte gRam
_080DBE7C:
	.4byte 0x00000996
_080DBE80:
	.4byte 0x00000F92
_080DBE84:
	.4byte 0x00001082
_080DBE88:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080DBDF4

