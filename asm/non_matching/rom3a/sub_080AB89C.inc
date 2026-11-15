	THUMB_FUNC_START sub_080AB89C
sub_080AB89C: @ 0x080AB89C
	push {r4-r6,lr}
	add r4, r2, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	add r1, r5, #0
	bl sub_080AE870
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	blt _080AB944
	strb r1, [r4]
	ldr r2, _080AB928  @ =gRam
	ldr r1, _080AB92C  @ =0x00000E15
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	mov r3, #0
	strb r5, [r0]
	add r1, r1, #50
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	mov r6, #161
	lsl r6, r6, #4
	add r1, r2, r6
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, #195
	lsl r1, r1, #5
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	ldr r6, _080AB930  @ =0x00000B1E
	add r1, r2, r6
	ldrh r1, [r1]
	strb r1, [r0]
	ldr r1, _080AB934  @ =0x00000DED
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	strb r3, [r0]
	add r1, r1, #10
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	strb r3, [r0]
	ldr r1, _080AB938  @ =0x00000A74
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	strb r3, [r0]
	add r1, r1, #10
	add r0, r2, r1
	ldrb r6, [r4]
	add r0, r0, r6
	strb r3, [r0]
	ldr r0, _080AB93C  @ =0x00000E5B
	add r2, r2, r0
	ldrb r4, [r4]
	add r2, r2, r4
	ldr r1, _080AB940  @ =gUnknown_08226484
	sub r0, r5, #1
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	mov r0, #0
	b _080AB946
_080AB928:
	.4byte gRam
_080AB92C:
	.4byte 0x00000E15
_080AB930:
	.4byte 0x00000B1E
_080AB934:
	.4byte 0x00000DED
_080AB938:
	.4byte 0x00000A74
_080AB93C:
	.4byte 0x00000E5B
_080AB940:
	.4byte gUnknown_08226484
_080AB944:
	mov r0, #1
_080AB946:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AB89C

