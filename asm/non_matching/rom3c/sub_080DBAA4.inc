	THUMB_FUNC_START sub_080DBAA4
sub_080DBAA4: @ 0x080DBAA4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DBACC  @ =gRam
	ldr r2, _080DBAD0  @ =0x00001052
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #2
	mov r2, #1
	and r1, r1, r2
	lsl r1, r1, #5
	ldr r2, _080DBAD4  @ =gUnknown_08175E7C
	add r1, r1, r2
	mov r2, #4
	bl sub_080C9480
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DBACC:
	.4byte gRam
_080DBAD0:
	.4byte 0x00001052
_080DBAD4:
	.4byte gUnknown_08175E7C
	THUMB_FUNC_END sub_080DBAA4

