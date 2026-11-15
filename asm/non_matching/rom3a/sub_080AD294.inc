	THUMB_FUNC_START sub_080AD294
sub_080AD294: @ 0x080AD294
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r3, #0
	ldr r2, _080AD2F8  @ =gRam
	ldr r4, _080AD2FC  @ =0x00000E15
	add r1, r2, r4
	strb r0, [r1]
	ldr r1, _080AD300  @ =gUnknown_08226484
	sub r0, r0, #1
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r4, _080AD304  @ =0x0000097C
	add r0, r2, r4
	strb r1, [r0]
	ldr r4, _080AD308  @ =0x00000E5B
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080AD30C  @ =0x00000E47
	add r1, r2, r0
	mov r4, #161
	lsl r4, r4, #4
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #195
	lsl r0, r0, #5
	add r1, r2, r0
	ldr r4, _080AD310  @ =0x00000B1E
	add r0, r2, r4
	ldrh r0, [r0]
	strb r0, [r1]
	ldr r1, _080AD314  @ =0x00000A74
	add r0, r2, r1
	strb r3, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	ldr r0, _080AD318  @ =0x00002162
	strh r0, [r1]
	ldr r0, _080AD31C  @ =0x00000964
	add r2, r2, r0
	sub r0, r0, #44
	strh r0, [r2]
	mov r0, #0
	bl sub_080ABA78
	pop {r4}
	pop {r0}
	bx r0
_080AD2F8:
	.4byte gRam
_080AD2FC:
	.4byte 0x00000E15
_080AD300:
	.4byte gUnknown_08226484
_080AD304:
	.4byte 0x0000097C
_080AD308:
	.4byte 0x00000E5B
_080AD30C:
	.4byte 0x00000E47
_080AD310:
	.4byte 0x00000B1E
_080AD314:
	.4byte 0x00000A74
_080AD318:
	.4byte 0x00002162
_080AD31C:
	.4byte 0x00000964
	THUMB_FUNC_END sub_080AD294

