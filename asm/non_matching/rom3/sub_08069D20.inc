	THUMB_FUNC_START sub_08069D20
sub_08069D20: @ 0x08069D20
	ldr r0, _08069DD0  @ =gRam
	ldr r2, _08069DD4  @ =0x0000050C
	add r1, r0, r2
	ldrh r2, [r1]
	ldr r3, _08069DD8  @ =0x00001A88
	add r1, r0, r3
	strh r2, [r1]
	ldr r1, _08069DDC  @ =0x04000008
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069DE0  @ =0x00000514
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069DE4  @ =0x00000516
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	mov r2, #163
	lsl r2, r2, #3
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069DE8  @ =0x0000051E
	add r1, r0, r2
	ldrh r2, [r1]
	add r3, r3, #2
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069DEC  @ =0x00000998
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #4
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069DF0  @ =0x00000999
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	mov r2, #162
	lsl r2, r2, #3
	add r1, r0, r2
	ldrh r2, [r1]
	sub r3, r3, #3
	add r1, r0, r3
	strh r2, [r1]
	ldr r2, _08069DF4  @ =0x00000C99
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #46
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069DF8  @ =0x00000C9B
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069DFC  @ =0x00000C9A
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069E00  @ =0x000009B4
	add r1, r0, r2
	ldrb r2, [r1]
	add r3, r3, #1
	add r1, r0, r3
	strb r2, [r1]
	ldr r2, _08069E04  @ =0x000009B5
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r3, #1
	add r0, r0, r3
	strb r1, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_08069DD0:
	.4byte gRam
_08069DD4:
	.4byte 0x0000050C
_08069DD8:
	.4byte 0x00001A88
_08069DDC:
	.4byte 0x04000008
_08069DE0:
	.4byte 0x00000514
_08069DE4:
	.4byte 0x00000516
_08069DE8:
	.4byte 0x0000051E
_08069DEC:
	.4byte 0x00000998
_08069DF0:
	.4byte 0x00000999
_08069DF4:
	.4byte 0x00000C99
_08069DF8:
	.4byte 0x00000C9B
_08069DFC:
	.4byte 0x00000C9A
_08069E00:
	.4byte 0x000009B4
_08069E04:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_08069D20

