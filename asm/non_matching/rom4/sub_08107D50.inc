	THUMB_FUNC_START sub_08107D50
sub_08107D50: @ 0x08107D50
	push {r4-r6,lr}
	ldr r4, _08107D60  @ =gUnknown_02010995
	ldrb r0, [r4]
	cmp r0, #0
	beq _08107D64
	sub r0, r0, #1
	b _08107D9E
	.byte 0x00
	.byte 0x00
_08107D60:
	.4byte gUnknown_02010995
_08107D64:
	ldr r0, _08107DA8  @ =gUnknown_02010994
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08107DA0
	ldr r5, _08107DAC  @ =gUnknown_02010993
	ldrb r3, [r5]
	mov r2, #1
	and r2, r2, r3
	ldr r1, _08107DB0  @ =gUnknown_02010992
	ldr r0, _08107DB4  @ =gUnknown_0817BFF6
	add r0, r2, r0
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r1, _08107DB8  @ =gUnknown_0817BFF4
	add r2, r2, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r2, [r2]
	cmp r0, r2
	bne _08107DA0
	add r0, r3, #1
	strb r0, [r5]
	mov r0, #8
_08107D9E:
	strb r0, [r4]
_08107DA0:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08107DA8:
	.4byte gUnknown_02010994
_08107DAC:
	.4byte gUnknown_02010993
_08107DB0:
	.4byte gUnknown_02010992
_08107DB4:
	.4byte gUnknown_0817BFF6
_08107DB8:
	.4byte gUnknown_0817BFF4
	THUMB_FUNC_END sub_08107D50

