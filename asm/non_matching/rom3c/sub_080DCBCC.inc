	THUMB_FUNC_START sub_080DCBCC
sub_080DCBCC: @ 0x080DCBCC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #58
	add r1, r7, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080DCCC6
	add r0, r7, #0
	mov r1, #42
	bl sub_080CF140
	lsl r0, r6, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080DCCCC  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #4
	mov r5, #0
	strh r0, [r1]
	ldr r3, _080DCCD0  @ =0x00000EE2
	add r0, r2, r3
	add r0, r6, r0
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080DCCD4  @ =0x00000F02
	add r0, r2, r1
	add r0, r6, r0
	ldr r3, _080DCCD8  @ =0x00000961
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080DCCDC  @ =0x00000964
	add r3, r2, r0
	ldr r1, _080DCCE0  @ =0x00001142
	add r4, r2, r1
	add r0, r7, r4
	ldrb r1, [r0]
	sub r1, r1, #12
	ldrh r0, [r3]
	sub r0, r0, r1
	strh r0, [r3]
	ldr r1, _080DCCE4  @ =0x00000ED2
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r3, _080DCCE8  @ =0x00000EF2
	add r0, r2, r3
	add r0, r6, r0
	ldr r3, _080DCCEC  @ =0x00000965
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	add r4, r6, r4
	strb r5, [r4]
	ldr r1, _080DCCF0  @ =0x00000F12
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #24
	strb r1, [r0]
	ldr r3, _080DCCF4  @ =0x00001082
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	add r3, r3, #240
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080DCCF8  @ =0x00001012
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #128
	strb r1, [r0]
	ldr r3, _080DCCFC  @ =0x00001032
	add r0, r2, r3
	add r0, r6, r0
	mov r1, #3
	strb r1, [r0]
	add r3, r3, #240
	add r0, r2, r3
	add r0, r6, r0
	strb r1, [r0]
	ldr r1, _080DCD00  @ =0x00000FC2
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #32
	strb r1, [r0]
	ldr r3, _080DCD04  @ =0x00000F92
	add r0, r2, r3
	add r0, r6, r0
	mov r5, #2
	strb r5, [r0]
	ldr r0, _080DCD08  @ =0x00000F22
	add r1, r2, r0
	add r1, r6, r1
	ldr r3, _080DCD0C  @ =gUnknown_0817614A
	ldr r0, _080DCD10  @ =0x000010A2
	add r4, r2, r0
	add r4, r7, r4
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080DCD14  @ =0x00001052
	add r1, r2, r3
	add r1, r6, r1
	ldr r3, _080DCD18  @ =gUnknown_0817614E
	ldrb r0, [r4]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080DCD1C  @ =0x000010F2
	add r2, r2, r0
	add r2, r6, r2
	strb r5, [r2]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080DCCC6:
	pop {r4-r7}
	pop {r0}
	bx r0
_080DCCCC:
	.4byte gRam
_080DCCD0:
	.4byte 0x00000EE2
_080DCCD4:
	.4byte 0x00000F02
_080DCCD8:
	.4byte 0x00000961
_080DCCDC:
	.4byte 0x00000964
_080DCCE0:
	.4byte 0x00001142
_080DCCE4:
	.4byte 0x00000ED2
_080DCCE8:
	.4byte 0x00000EF2
_080DCCEC:
	.4byte 0x00000965
_080DCCF0:
	.4byte 0x00000F12
_080DCCF4:
	.4byte 0x00001082
_080DCCF8:
	.4byte 0x00001012
_080DCCFC:
	.4byte 0x00001032
_080DCD00:
	.4byte 0x00000FC2
_080DCD04:
	.4byte 0x00000F92
_080DCD08:
	.4byte 0x00000F22
_080DCD0C:
	.4byte gUnknown_0817614A
_080DCD10:
	.4byte 0x000010A2
_080DCD14:
	.4byte 0x00001052
_080DCD18:
	.4byte gUnknown_0817614E
_080DCD1C:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080DCBCC

