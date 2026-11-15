	THUMB_FUNC_START sub_08113AFC
sub_08113AFC: @ 0x08113AFC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r2, #0
	ldr r1, _08113BC0  @ =gRam
	ldr r3, _08113BC4  @ =0x00001770
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113B38
	sub r3, r3, #88
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113B38
	ldr r0, _08113BC8  @ =gShield
	ldrb r0, [r0]
	cmp r0, #0
	beq _08113B38
	ldr r3, _08113BCC  @ =0x00000FD2
	add r0, r1, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113B38
	ldr r0, _08113BD0  @ =gMaxHealth
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r2, r0, #31
_08113B38:
	add r6, r2, #0
	cmp r6, #0
	beq _08113BF8
	ldr r4, _08113BC0  @ =gRam
	ldr r0, _08113BD4  @ =0x000016C4
	add r2, r4, r0
	ldr r1, _08113BD8  @ =0x00000EE2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	ldr r3, _08113BDC  @ =0x00000F02
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #23
	bhi _08113BF8
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r1, _08113BE0  @ =0x00000ED2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r1, [r0]
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldrh r0, [r2]
	sub r0, r0, r1
	add r0, r0, #12
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #23
	bhi _08113BF8
	ldr r1, _08113BE4  @ =0x00000F52
	add r0, r4, r1
	add r0, r5, r0
	mov r3, #1
	strb r3, [r0]
	ldr r2, _08113BE8  @ =0x00000FC2
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #127
	strb r1, [r0]
	ldr r0, _08113BEC  @ =0x00001032
	add r1, r4, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #64
	orr r0, r0, r2
	strb r0, [r1]
	ldr r2, _08113BF0  @ =0x00001718
	add r1, r4, r2
	mov r0, #31
	strb r0, [r1]
	ldr r1, _08113BF4  @ =0x0000180D
	add r0, r4, r1
	strb r3, [r0]
	b _08113CC2
_08113BC0:
	.4byte gRam
_08113BC4:
	.4byte 0x00001770
_08113BC8:
	.4byte gShield
_08113BCC:
	.4byte 0x00000FD2
_08113BD0:
	.4byte gMaxHealth
_08113BD4:
	.4byte 0x000016C4
_08113BD8:
	.4byte 0x00000EE2
_08113BDC:
	.4byte 0x00000F02
_08113BE0:
	.4byte 0x00000ED2
_08113BE4:
	.4byte 0x00000F52
_08113BE8:
	.4byte 0x00000FC2
_08113BEC:
	.4byte 0x00001032
_08113BF0:
	.4byte 0x00001718
_08113BF4:
	.4byte 0x0000180D
_08113BF8:
	add r0, r5, #0
	bl sub_080C5044
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080C79F8
	ldr r4, _08113C70  @ =gRam
	ldr r2, _08113C74  @ =0x00001042
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113C24
	ldr r3, _08113C78  @ =0x00000FC2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08113CC2
_08113C24:
	bl GetRandomInt
	ldr r1, _08113C78  @ =0x00000FC2
	add r2, r4, r1
	add r2, r5, r2
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #64
	strb r1, [r2]
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r6, #0
	beq _08113C88
	ldr r2, _08113C7C  @ =0x0000097C
	add r0, r4, r2
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bls _08113C64
	ldr r3, _08113C80  @ =0x0000097D
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #16
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #31
	bhi _08113C88
_08113C64:
	ldr r2, _08113C84  @ =0x00000FB2
	add r0, r4, r2
	add r0, r5, r0
	strb r1, [r0]
	b _08113C9A
	.byte 0x00
	.byte 0x00
_08113C70:
	.4byte gRam
_08113C74:
	.4byte 0x00001042
_08113C78:
	.4byte 0x00000FC2
_08113C7C:
	.4byte 0x0000097C
_08113C80:
	.4byte 0x0000097D
_08113C84:
	.4byte 0x00000FB2
_08113C88:
	bl GetRandomInt
	ldr r2, _08113CE4  @ =gRam
	ldr r3, _08113CE8  @ =0x00000FB2
	add r2, r2, r3
	add r2, r5, r2
	mov r1, #3
	and r1, r1, r0
	strb r1, [r2]
_08113C9A:
	ldr r1, _08113CE4  @ =gRam
	ldr r0, _08113CEC  @ =0x00000F22
	add r3, r1, r0
	add r3, r5, r3
	ldr r4, _08113CF0  @ =gUnknown_0817D898
	add r0, r0, #144
	add r2, r1, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, r4
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r3, _08113CF4  @ =0x00000F12
	add r1, r1, r3
	add r1, r5, r1
	ldr r3, _08113CF8  @ =gUnknown_0817D89C
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
_08113CC2:
	ldr r0, _08113CE4  @ =gRam
	ldr r1, _08113CFC  @ =0x00000F92
	add r2, r0, r1
	add r2, r5, r2
	ldr r3, _08113D00  @ =0x00000996
	add r0, r0, r3
	ldrb r0, [r0]
	add r0, r5, r0
	lsr r0, r0, #4
	mov r1, #1
	eor r0, r0, r1
	and r0, r0, r1
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08113CE4:
	.4byte gRam
_08113CE8:
	.4byte 0x00000FB2
_08113CEC:
	.4byte 0x00000F22
_08113CF0:
	.4byte gUnknown_0817D898
_08113CF4:
	.4byte 0x00000F12
_08113CF8:
	.4byte gUnknown_0817D89C
_08113CFC:
	.4byte 0x00000F92
_08113D00:
	.4byte 0x00000996
	THUMB_FUNC_END sub_08113AFC

