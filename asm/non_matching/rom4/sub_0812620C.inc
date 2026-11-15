	THUMB_FUNC_START sub_0812620C
sub_0812620C: @ 0x0812620C
	push {r4,lr}
	ldr r2, _08126240  @ =gRam
	ldr r0, _08126244  @ =0x00001B10
	add r4, r2, r0
	ldrh r3, [r4]
	ldr r0, _08126248  @ =0x0000FD23
	cmp r3, r0
	bls _08126228
	ldr r1, _0812624C  @ =0x00001B0E
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _08126250  @ =0x0000FE48
	cmp r1, r0
	bhi _08126258
_08126228:
	ldr r1, _08126254  @ =0x000002DB
	add r0, r3, r1
	strh r0, [r4]
	ldr r0, _0812624C  @ =0x00001B0E
	add r1, r2, r0
	mov r2, #219
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	b _08126264
_08126240:
	.4byte gRam
_08126244:
	.4byte 0x00001B10
_08126248:
	.4byte 0x0000FD23
_0812624C:
	.4byte 0x00001B0E
_08126250:
	.4byte 0x0000FE48
_08126254:
	.4byte 0x000002DB
_08126258:
	ldr r0, _0812626C  @ =gUnknown_03000050
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r1, #18
	strb r1, [r0, #1]
_08126264:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812626C:
	.4byte gUnknown_03000050
	THUMB_FUNC_END sub_0812620C

