	THUMB_FUNC_START sub_080DBD34
sub_080DBD34: @ 0x080DBD34
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #191
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080DBDC0
	mov r0, #44
	mov r1, #0
	bl sub_0812A324
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	bl GetRandomInt
	ldr r3, _080DBDC8  @ =gRam
	ldr r1, _080DBDCC  @ =0x00000F62
	add r2, r3, r1
	add r2, r4, r2
	mov r1, #7
	and r1, r1, r0
	strb r1, [r2]
	ldrb r2, [r2]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	ldr r0, _080DBDD0  @ =gUnknown_08175F0C
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080DBDD4  @ =gUnknown_08175F14
	add r2, r2, r0
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _080DBDD8  @ =0x00000EE2
	add r0, r3, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r3, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080DBDDC  @ =0x00000ED2
	add r1, r3, r0
	add r1, r4, r1
	ldr r2, _080DBDE0  @ =0x00000964
	add r0, r3, r2
	ldrb r0, [r0]
	add r0, r0, #12
	strb r0, [r1]
	ldr r1, _080DBDE4  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r2, _080DBDE8  @ =0x00001646
	add r0, r3, r2
	mov r1, #48
	strb r1, [r0]
	ldr r0, _080DBDEC  @ =0x00001645
	add r3, r3, r0
	strb r1, [r3]
_080DBDC0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DBDC8:
	.4byte gRam
_080DBDCC:
	.4byte 0x00000F62
_080DBDD0:
	.4byte gUnknown_08175F0C
_080DBDD4:
	.4byte gUnknown_08175F14
_080DBDD8:
	.4byte 0x00000EE2
_080DBDDC:
	.4byte 0x00000ED2
_080DBDE0:
	.4byte 0x00000964
_080DBDE4:
	.4byte 0x00000FC2
_080DBDE8:
	.4byte 0x00001646
_080DBDEC:
	.4byte 0x00001645
	THUMB_FUNC_END sub_080DBD34

