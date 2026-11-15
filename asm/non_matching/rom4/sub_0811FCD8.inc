	THUMB_FUNC_START sub_0811FCD8
sub_0811FCD8: @ 0x0811FCD8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _0811FD08  @ =gRam
	ldr r2, _0811FD0C  @ =0x00000E1F
	add r0, r1, r2
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #4
	bne _0811FD36
	ldr r4, _0811FD10  @ =0x00000996
	add r0, r1, r4
	ldrb r0, [r0]
	mov r1, #15
	and r1, r1, r0
	cmp r1, #4
	beq _0811FD28
	cmp r1, #4
	bgt _0811FD14
	cmp r1, #0
	beq _0811FD1A
	b _0811FD28
_0811FD08:
	.4byte gRam
_0811FD0C:
	.4byte 0x00000E1F
_0811FD10:
	.4byte 0x00000996
_0811FD14:
	cmp r1, #7
	beq _0811FD22
	b _0811FD28
_0811FD1A:
	mov r0, #93
	bl sub_080C1A8C
	b _0811FD28
_0811FD22:
	mov r0, #88
	bl sub_080C1A8C
_0811FD28:
	ldr r0, _0811FDCC  @ =gRam
	ldr r1, _0811FDD0  @ =0x00000E1F
	add r0, r0, r1
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #4
	beq _0811FD68
_0811FD36:
	ldr r7, _0811FDCC  @ =gRam
	ldr r2, _0811FDD4  @ =0x00000DCF
	add r4, r7, r2
	add r4, r6, r4
	ldr r5, _0811FDD8  @ =gUnknown_02006888
	ldrb r0, [r5]
	mov r1, #0
	strb r0, [r4]
	add r2, r2, #20
	add r0, r7, r2
	add r0, r6, r0
	strb r1, [r0]
	add r0, r6, #0
	bl sub_080C1768
	ldrb r0, [r4]
	strb r0, [r5]
	ldrb r0, [r4]
	cmp r0, #64
	bne _0811FD68
	ldr r4, _0811FDD0  @ =0x00000E1F
	add r0, r7, r4
	add r0, r6, r0
	mov r1, #4
	strb r1, [r0]
_0811FD68:
	ldr r2, _0811FDCC  @ =gRam
	ldr r1, _0811FDD0  @ =0x00000E1F
	add r0, r2, r1
	add r0, r6, r0
	ldrb r0, [r0]
	ldr r4, _0811FDDC  @ =0x00001732
	add r3, r2, r4
	strb r0, [r3]
	add r1, r1, #10
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	mov r4, #7
	mov r5, #0
	mov r8, r2
	add r7, r3, #0
_0811FD8E:
	ldrb r0, [r7]
	cmp r0, #2
	beq _0811FDA6
	cmp r0, #5
	beq _0811FDA6
	ldr r1, _0811FDE0  @ =gUnknown_02006880
	add r0, r4, r1
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #63
	and r1, r1, r2
	strb r1, [r0]
_0811FDA6:
	ldr r0, _0811FDD8  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	strb r1, [r0]
	ldr r2, _0811FDE0  @ =gUnknown_02006880
	add r0, r4, r2
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C06EC
	ldrb r0, [r7]
	cmp r0, #2
	beq _0811FDE4
	bl sub_0812014C
	b _0811FDEA
	.byte 0x00
	.byte 0x00
_0811FDCC:
	.4byte gRam
_0811FDD0:
	.4byte 0x00000E1F
_0811FDD4:
	.4byte 0x00000DCF
_0811FDD8:
	.4byte gUnknown_02006888
_0811FDDC:
	.4byte 0x00001732
_0811FDE0:
	.4byte gUnknown_02006880
_0811FDE4:
	add r0, r4, #0
	bl sub_08120278
_0811FDEA:
	add r0, r5, r0
	lsl r0, r0, #24
	lsr r5, r0, #24
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _0811FD8E
	ldr r0, _0811FE98  @ =gUnknown_02006888
	ldrb r0, [r0]
	cmp r0, #239
	bhi _0811FE06
	cmp r5, #0
	bne _0811FF00
_0811FE06:
	ldr r4, _0811FE9C  @ =gRam
	ldr r1, _0811FEA0  @ =0x00000E15
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _0811FEA4  @ =0x00000CA2
	add r2, r4, r0
	mov r6, #0
	mov r0, #1
	strh r0, [r2]
	ldr r2, _0811FEA8  @ =0x000017B0
	add r0, r4, r2
	strh r1, [r0]
	sub r2, r2, #10
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _0811FEAC  @ =0x00001705
	add r0, r4, r1
	strb r6, [r0]
	ldr r2, _0811FEB0  @ =0x00001605
	add r0, r4, r2
	strb r6, [r0]
	ldr r1, _0811FEB4  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #112
	bne _0811FE6E
	ldr r0, _0811FEB8  @ =gUnknown_020022F0
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0811FE6E
	mov r0, #2
	bl sub_080BF9D8
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811FE6E
	ldr r2, _0811FEBC  @ =0x00000B6E
	add r1, r4, r2
	mov r0, #3
	strb r0, [r1]
	ldr r1, _0811FEC0  @ =0x000009E8
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _0811FEC4  @ =0x00000A02
	add r0, r4, r2
	strb r6, [r0]
_0811FE6E:
	ldr r0, _0811FE9C  @ =gRam
	ldr r4, _0811FEC8  @ =0x00001718
	add r2, r0, r4
	ldrb r1, [r2]
	add r5, r0, #0
	cmp r1, #25
	beq _0811FEE0
	mov r0, #0
	strb r0, [r2]
	ldr r2, _0811FECC  @ =0x000016EB
	add r1, r5, r2
	strb r0, [r1]
	sub r4, r4, #46
	add r0, r5, r4
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811FED0
	sub r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	b _0811FEE0
_0811FE98:
	.4byte gUnknown_02006888
_0811FE9C:
	.4byte gRam
_0811FEA0:
	.4byte 0x00000E15
_0811FEA4:
	.4byte 0x00000CA2
_0811FEA8:
	.4byte 0x000017B0
_0811FEAC:
	.4byte 0x00001705
_0811FEB0:
	.4byte 0x00001605
_0811FEB4:
	.4byte 0x000009C6
_0811FEB8:
	.4byte gUnknown_020022F0
_0811FEBC:
	.4byte 0x00000B6E
_0811FEC0:
	.4byte 0x000009E8
_0811FEC4:
	.4byte 0x00000A02
_0811FEC8:
	.4byte 0x00001718
_0811FECC:
	.4byte 0x000016EB
_0811FED0:
	ldr r4, _0811FF0C  @ =0x00000545
	add r0, r5, r4
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r2, _0811FF10  @ =0x000016E8
	add r1, r5, r2
	strb r0, [r1]
_0811FEE0:
	ldr r4, _0811FF14  @ =0x00001719
	add r1, r5, r4
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0811FF18  @ =0x000017B0
	add r0, r5, r1
	ldrb r1, [r0]
	mov r4, #0
	strh r1, [r0]
	bl sub_08133644
	bl sub_08132448
	ldr r2, _0811FF1C  @ =0x00001644
	add r0, r5, r2
	strb r4, [r0]
_0811FF00:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811FF0C:
	.4byte 0x00000545
_0811FF10:
	.4byte 0x000016E8
_0811FF14:
	.4byte 0x00001719
_0811FF18:
	.4byte 0x000017B0
_0811FF1C:
	.4byte 0x00001644
	THUMB_FUNC_END sub_0811FCD8

