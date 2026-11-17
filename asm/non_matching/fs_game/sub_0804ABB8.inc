	THUMB_FUNC_START sub_0804ABB8
sub_0804ABB8: @ 0x0804ABB8
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804ABDE
	b _0804AED6
_0804ABDE:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #4
	bne _0804ABF6
	b _0804AD78
_0804ABF6:
	cmp r0, #4
	bgt _0804AC00
	cmp r0, #1
	beq _0804AC0E
	b _0804AED6
_0804AC00:
	cmp r0, #8
	bne _0804AC06
	b _0804AD78
_0804AC06:
	cmp r0, #12
	bne _0804AC0C
	b _0804AD78
_0804AC0C:
	b _0804AED6
_0804AC0E:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #0
	beq _0804ACF4
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r0, [r0, #23]
	ldrb r1, [r2, #10]
	cmp r0, r1
	bne _0804ACBC
	bl sub_08003170
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #23]
	cmp r0, r1
	bne _0804AC7E
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _0804ACB4  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0804AC7E
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_0804AC7E:
	ldr r0, _0804ACB8  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	b _0804ACEC
	.byte 0x00
	.byte 0x00
_0804ACB4:
	.4byte gUnknown_03006C80
_0804ACB8:
	.4byte gUnknown_03006A30
_0804ACBC:
	ldr r0, _0804ACF0  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_0804ACEC:
	b _0804AD68
	.byte 0x00
	.byte 0x00
_0804ACF0:
	.4byte gUnknown_03006A30
_0804ACF4:
	bl sub_08003170
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #23]
	cmp r0, r1
	bne _0804AD36
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _0804AD70  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0804AD36
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_0804AD36:
	ldr r0, _0804AD74  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_0804AD68:
	mov r0, #180
	bl sub_08003DFC
	b _0804AED6
_0804AD70:
	.4byte gUnknown_03006C80
_0804AD74:
	.4byte gUnknown_03006A30
_0804AD78:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #0
	bne _0804AD9A
	b _0804AEB0
_0804AD9A:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r0, [r0, #23]
	ldrb r1, [r2, #10]
	cmp r0, r1
	beq _0804ADAA
	b _0804AEAE
_0804ADAA:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #112]
	sub r1, r2, #1
	str r1, [r0, #112]
	bl sub_08003170
	add r1, r7, #0
	add r1, r1, #8
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #23]
	cmp r0, r1
	bne _0804ADF8
	add r1, r7, #0
	add r1, r1, #8
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _0804AE88  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0804ADF8
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strb r1, [r0]
_0804ADF8:
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	add r2, r3, #7
	add r3, r2, #0
	mov r4, #15
	and r3, r3, r4
	ldrb r4, [r1, #30]
	mov r5, #240
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #0
	beq _0804AE90
	ldr r0, _0804AE8C  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #8
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	b _0804AEAE
	.byte 0x00
	.byte 0x00
_0804AE88:
	.4byte gUnknown_03006C80
_0804AE8C:
	.4byte gUnknown_03006A30
_0804AE90:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r7]
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_0804AEAE:
	b _0804AECE
_0804AEB0:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r7]
	bl sub_08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_0804AECE:
	mov r0, #180
	bl sub_08003DFC
	b _0804AED6
_0804AED6:
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #0
	bne _0804AFC0
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	lsl r0, r1, #28
	lsr r1, r0, #28
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #28
	lsr r1, r3, #28
	add r2, r1, #1
	add r1, r2, #0
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	lsl r2, r1, #28
	lsr r0, r2, #28
	cmp r0, #10
	ble _0804AF28
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
_0804AF28:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #28
	lsr r1, r3, #28
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	mov r2, #58
	ldrsh r0, [r1, r2]
	mov r1, #16
	cmn r0, r1
	ble _0804AFC0
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r7]
	mov r2, #16
	mov r3, #16
	bl sub_0800390C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804AFC0
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #113
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804B154
_0804AFC0:
	ldr r0, [r7]
	bl sub_08002E64
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	cmp r1, #0
	beq _0804AFE8
	ldr r0, [r7]
	ldr r2, [r0, #84]
	add r1, r2, #0
	add r0, r2, #0
	add r0, r0, #113
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
_0804AFE8:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _0804B00C
	b _0804B136
_0804B00C:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	mov r0, #96
	mov r1, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	bne _0804B034
	b _0804B136
_0804B034:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #160
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #35
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #50]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #54]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r3, r2, #28
	lsr r1, r3, #28
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #28]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #32
	add r2, r0, #0
	add r0, r0, #32
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_0804B136:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #116]
	add r1, r2, #1
	str r1, [r0, #116]
	ldr r0, [r7]
	ldr r1, [r0, #116]
	mov r0, #135
	lsl r0, r0, #2
	cmp r1, r0
	bls _0804B154
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #116]
_0804B154:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804ABB8

