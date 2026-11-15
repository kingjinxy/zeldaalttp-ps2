	THUMB_FUNC_START sub_080A1324
sub_080A1324: @ 0x080A1324
	push {r4,lr}
	ldr r3, _080A1370  @ =gRam
	ldr r0, _080A1374  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r4, #0
	strb r0, [r2]
	ldr r0, _080A1378  @ =0x00001794
	add r1, r3, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A136A
	ldr r1, _080A137C  @ =0x00001796
	add r0, r3, r1
	strb r4, [r0]
	sub r1, r1, #3
	add r0, r3, r1
	strb r4, [r0]
	add r1, r1, #117
	add r0, r3, r1
	strb r4, [r0]
	ldr r1, _080A1380  @ =0x000016E9
	add r0, r3, r1
	strb r4, [r0]
	ldr r0, _080A1384  @ =0x00001705
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
_080A136A:
	pop {r4}
	pop {r0}
	bx r0
_080A1370:
	.4byte gRam
_080A1374:
	.4byte 0x00001727
_080A1378:
	.4byte 0x00001794
_080A137C:
	.4byte 0x00001796
_080A1380:
	.4byte 0x000016E9
_080A1384:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080A1324

