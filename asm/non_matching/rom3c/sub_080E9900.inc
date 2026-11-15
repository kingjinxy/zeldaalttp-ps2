	THUMB_FUNC_START sub_080E9900
sub_080E9900: @ 0x080E9900
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r0, #192
	add r1, r6, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080E9972
	lsl r0, r5, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r4, _080E9978  @ =gRam
	ldr r1, _080E997C  @ =0x00001152
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	ldr r1, _080E9980  @ =0x00000F12
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
	ldr r1, _080E9984  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #30
	strb r1, [r0]
	add r0, r6, #0
	mov r1, #108
	bl sub_080CF0AC
	ldr r1, _080E9988  @ =0x00001012
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #131
	strb r1, [r0]
	ldr r1, _080E998C  @ =0x00001032
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #84
	strb r1, [r0]
	ldr r1, _080E9990  @ =0x00001122
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #4
	strb r1, [r0]
	ldr r0, _080E9994  @ =0x000010B2
	add r4, r4, r0
	add r4, r5, r4
	mov r0, #48
	strb r0, [r4]
	mov r0, #17
	bl sub_0812FBC4
_080E9972:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E9978:
	.4byte gRam
_080E997C:
	.4byte 0x00001152
_080E9980:
	.4byte 0x00000F12
_080E9984:
	.4byte 0x00000F62
_080E9988:
	.4byte 0x00001012
_080E998C:
	.4byte 0x00001032
_080E9990:
	.4byte 0x00001122
_080E9994:
	.4byte 0x000010B2
	THUMB_FUNC_END sub_080E9900

