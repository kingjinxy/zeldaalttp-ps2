	THUMB_FUNC_START sub_0806B2D8
sub_0806B2D8: @ 0x0806B2D8
	push {r4,lr}
	bl sub_080AB70C
	ldr r3, _0806B314  @ =gRam
	ldr r0, _0806B318  @ =0x000009AD
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #10
	bne _0806B30C
	ldr r0, _0806B31C  @ =0x000009C6
	add r1, r3, r0
	mov r2, #0
	mov r0, #91
	strh r0, [r1]
	ldr r1, _0806B320  @ =0x000009B2
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _0806B324  @ =0x000009AC
	add r1, r3, r0
	mov r0, #24
	strb r0, [r1]
	strb r2, [r4]
	ldr r0, _0806B328  @ =0x00000A4C
	add r1, r3, r0
	mov r0, #2
	strh r0, [r1]
_0806B30C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B314:
	.4byte gRam
_0806B318:
	.4byte 0x000009AD
_0806B31C:
	.4byte 0x000009C6
_0806B320:
	.4byte 0x000009B2
_0806B324:
	.4byte 0x000009AC
_0806B328:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0806B2D8

