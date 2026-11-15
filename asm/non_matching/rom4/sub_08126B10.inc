	THUMB_FUNC_START sub_08126B10
sub_08126B10: @ 0x08126B10
	push {r4,r5,lr}
	ldr r5, _08126B38  @ =gUnknown_03000050
	mov r0, #224
	lsl r0, r0, #1
	str r0, [r5, #12]
	ldr r1, _08126B3C  @ =gRam
	ldr r0, _08126B40  @ =0x00001B0A
	add r2, r1, r0
	ldrh r3, [r2]
	mov r4, #0
	ldrsh r0, [r2, r4]
	add r4, r1, #0
	cmp r0, #0
	blt _08126B44
	mov r1, #128
	lsl r1, r1, #1
	add r0, r3, r1
	strh r0, [r2]
	b _08126BC8
	.byte 0x00
	.byte 0x00
_08126B38:
	.4byte gUnknown_03000050
_08126B3C:
	.4byte gRam
_08126B40:
	.4byte 0x00001B0A
_08126B44:
	ldr r2, _08126BA0  @ =0x00001B10
	add r3, r4, r2
	ldrh r0, [r3]
	ldr r1, _08126BA4  @ =0xFFFFF600
	add r0, r0, r1
	mov r1, #254
	lsl r1, r1, #7
	and r0, r0, r1
	ldr r1, _08126BA8  @ =0x00005BFF
	cmp r0, r1
	ble _08126BC8
	ldr r0, _08126BAC  @ =0x00001B0E
	add r2, r4, r0
	ldrh r0, [r2]
	ldr r1, _08126BB0  @ =0xFFFFF500
	add r0, r0, r1
	ldr r1, _08126BB4  @ =0x0000DBFF
	cmp r0, r1
	ble _08126BC8
	mov r0, #0
	strh r0, [r2]
	strh r0, [r3]
	ldr r2, _08126BB8  @ =0x000009E8
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	mov r0, #15
	mov r1, #0
	bl sub_0812A324
	ldr r1, _08126BBC  @ =gUnknown_02000EAE
	ldr r2, _08126BC0  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r0, _08126BC4  @ =0x0000099B
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #6
	strb r0, [r5, #1]
	b _08126BE6
_08126BA0:
	.4byte 0x00001B10
_08126BA4:
	.4byte 0xFFFFF600
_08126BA8:
	.4byte 0x00005BFF
_08126BAC:
	.4byte 0x00001B0E
_08126BB0:
	.4byte 0xFFFFF500
_08126BB4:
	.4byte 0x0000DBFF
_08126BB8:
	.4byte 0x000009E8
_08126BBC:
	.4byte gUnknown_02000EAE
_08126BC0:
	.4byte 0x00007FFF
_08126BC4:
	.4byte 0x0000099B
_08126BC8:
	ldr r2, _08126BEC  @ =0x00001B10
	add r1, r4, r2
	ldr r2, _08126BF0  @ =0x000002DB
	add r0, r2, #0
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	ldr r0, _08126BF4  @ =0x00001B0E
	add r1, r4, r0
	mov r2, #219
	lsl r2, r2, #1
	add r0, r2, #0
	ldrh r4, [r1]
	add r0, r0, r4
	strh r0, [r1]
_08126BE6:
	pop {r4,r5}
	pop {r0}
	bx r0
_08126BEC:
	.4byte 0x00001B10
_08126BF0:
	.4byte 0x000002DB
_08126BF4:
	.4byte 0x00001B0E
	THUMB_FUNC_END sub_08126B10

