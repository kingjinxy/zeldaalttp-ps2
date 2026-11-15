	THUMB_FUNC_START sub_080B68F4
sub_080B68F4: @ 0x080B68F4
	push {r4,lr}
	ldr r1, _080B6958  @ =gUnknown_02006882
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080B695C  @ =gRam
	mov r1, #152
	lsl r1, r1, #4
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _080B6960  @ =0x0000099D
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _080B6964  @ =0x00000954
	add r1, r2, r0
	mov r0, #13
	strh r0, [r1]
	sub r3, r3, #67
	add r1, r2, r3
	ldr r0, _080B6968  @ =0x0000FFDB
	strh r0, [r1]
	ldr r0, _080B696C  @ =0x00000A2C
	add r4, r2, r0
	ldrh r3, [r4]
	ldr r1, _080B6970  @ =0x000001FF
	add r0, r1, #0
	and r0, r0, r3
	strh r0, [r4]
	mov r3, #163
	lsl r3, r3, #4
	add r4, r2, r3
	ldrh r3, [r4]
	add r0, r1, #0
	and r0, r0, r3
	strh r0, [r4]
	ldr r0, _080B6974  @ =0x00000952
	add r4, r2, r0
	ldrh r3, [r4]
	add r0, r1, #0
	and r0, r0, r3
	strh r0, [r4]
	ldr r3, _080B6978  @ =0x00000958
	add r2, r2, r3
	ldrh r0, [r2]
	and r1, r1, r0
	strh r1, [r2]
	pop {r4}
	pop {r0}
	bx r0
_080B6958:
	.4byte gUnknown_02006882
_080B695C:
	.4byte gRam
_080B6960:
	.4byte 0x0000099D
_080B6964:
	.4byte 0x00000954
_080B6968:
	.4byte 0x0000FFDB
_080B696C:
	.4byte 0x00000A2C
_080B6970:
	.4byte 0x000001FF
_080B6974:
	.4byte 0x00000952
_080B6978:
	.4byte 0x00000958
	THUMB_FUNC_END sub_080B68F4

