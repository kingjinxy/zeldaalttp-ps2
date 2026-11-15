	THUMB_FUNC_START sub_081019D0
sub_081019D0: @ 0x081019D0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C4F98
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	lsl r0, r0, #24
	cmp r0, #0
	beq _081019F8
	ldr r0, _08101AD4  @ =gRam
	ldr r1, _08101AD8  @ =0x000010C2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_081019F8:
	ldr r5, _08101AD4  @ =gRam
	ldr r2, _08101ADC  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08101A50
	ldr r3, _08101AE0  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08101A50
	bl GetRandomInt
	mov r1, #7
	and r1, r1, r0
	ldr r0, _08101AE4  @ =gUnknown_0817B33C
	add r0, r1, r0
	ldrb r2, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r5, r3
	strb r2, [r0]
	ldr r0, _08101AE8  @ =gUnknown_0817B344
	add r1, r1, r0
	ldrb r1, [r1]
	ldr r2, _08101AEC  @ =0x00000961
	add r0, r5, r2
	strb r1, [r0]
	add r3, r3, #4
	add r1, r5, r3
	mov r0, #252
	strb r0, [r1]
	ldr r0, _08101AF0  @ =0x00000965
	add r1, r5, r0
	mov r0, #255
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C9A58
_08101A50:
	ldr r5, _08101AD4  @ =gRam
	ldr r1, _08101AF4  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08101A6C
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _08101AF8  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	strb r0, [r1]
_08101A6C:
	ldr r3, _08101AF8  @ =0x00000FB2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r0, _08101AFC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _08101B00  @ =gUnknown_0817B330
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r3, r3, #160
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _08101B04  @ =gUnknown_0817B334
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _08101B08  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08101AA6
	add r0, r4, #0
	bl Sprite3_Move
_08101AA6:
	add r0, r4, #0
	bl sub_080C7A20
	ldr r3, _08101B0C  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	ldr r3, _08101B10  @ =gUnknown_0817B338
	ldr r1, _08101AE0  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	lsr r0, r0, #2
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101AD4:
	.4byte gRam
_08101AD8:
	.4byte 0x000010C2
_08101ADC:
	.4byte 0x00000FD2
_08101AE0:
	.4byte 0x00000996
_08101AE4:
	.4byte gUnknown_0817B33C
_08101AE8:
	.4byte gUnknown_0817B344
_08101AEC:
	.4byte 0x00000961
_08101AF0:
	.4byte 0x00000965
_08101AF4:
	.4byte 0x00000FC2
_08101AF8:
	.4byte 0x00000FB2
_08101AFC:
	.4byte 0x00000F22
_08101B00:
	.4byte gUnknown_0817B330
_08101B04:
	.4byte gUnknown_0817B334
_08101B08:
	.4byte 0x00001042
_08101B0C:
	.4byte 0x00000F92
_08101B10:
	.4byte gUnknown_0817B338
	THUMB_FUNC_END sub_081019D0

