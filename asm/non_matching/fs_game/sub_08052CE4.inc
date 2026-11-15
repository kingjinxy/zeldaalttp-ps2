	THUMB_FUNC_START sub_08052CE4
sub_08052CE4: @ 0x08052CE4
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _08052DAC  @ =gUnknown_03000450
	ldrh r2, [r1, #32]
	add r1, r2, #0
	add r1, r1, #104
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, _08052DAC  @ =gUnknown_03000450
	ldrh r2, [r1, #34]
	add r1, r2, #0
	add r1, r1, #80
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _08052DB0  @ =gUnknown_03005E10
	ldr r1, _08052DB4  @ =gLCDRegisterBuffer
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08052D88
	ldr r0, _08052DB8  @ =gUnknown_03006C80
	ldr r1, _08052DB8  @ =gUnknown_03006C80
	add r2, r1, #0
	add r1, r1, #109
	ldr r2, _08052DB4  @ =gLCDRegisterBuffer
	ldrb r3, [r2]
	mov r4, #1
	add r2, r4, #0
	lsl r2, r2, r3
	ldrb r1, [r1]
	eor r1, r1, r2
	add r2, r0, #0
	add r0, r0, #109
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, _08052DB8  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #109
	ldrb r0, [r1]
	ldr r1, _08052DB4  @ =gLCDRegisterBuffer
	ldrb r2, [r1]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08052D88
	mov r0, #46
	mov r1, #0
	mov r2, #255
	bl sub_0804C938
_08052D88:
	ldr r1, _08052DB8  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #109
	ldrb r0, [r1]
	ldr r1, _08052DB4  @ =gLCDRegisterBuffer
	ldrb r2, [r1]
	asr r0, r0, r2
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08052DE0
	mov r0, #0
	str r0, [r7, #4]
_08052DA2:
	ldr r0, [r7, #4]
	cmp r0, #3
	ble _08052DBC
	b _08052DDE
	.byte 0x00
	.byte 0x00
_08052DAC:
	.4byte gUnknown_03000450
_08052DB0:
	.4byte gUnknown_03005E10
_08052DB4:
	.4byte gLCDRegisterBuffer
_08052DB8:
	.4byte gUnknown_03006C80
_08052DBC:
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r1, r1, #8
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08052DA2
_08052DDE:
	b _0805301E
_08052DE0:
	mov r0, #0
	str r0, [r7, #4]
_08052DE4:
	ldr r0, [r7, #4]
	cmp r0, #7
	ble _08052DEC
	b _08052E0E
_08052DEC:
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r1, r1, #12
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08052DE4
_08052E0E:
	mov r0, #0
	str r0, [r7, #4]
_08052E12:
	ldr r0, _08052E20  @ =gUnknown_03006C80
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	blt _08052E24
	b _0805301E
	.byte 0x00
	.byte 0x00
_08052E20:
	.4byte gUnknown_03006C80
_08052E24:
	ldr r0, _08052E78  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	ldr r0, [r7, #4]
	cmp r0, r1
	bne _08052E30
	b _08053016
_08052E30:
	ldr r0, _08052E7C  @ =gUnknown_03006A30
	ldr r1, [r7, #4]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #12]
	ldr r1, [r7, #12]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r1, _08052E80  @ =gUnknown_03000450
	mov r3, #34
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	sub r1, r1, #16
	cmp r0, r1
	bge _08052EB2
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052E80  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	sub r1, r1, #16
	cmp r0, r1
	bge _08052E84
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #7
	strh r1, [r0]
	b _08052EB0
	.byte 0x00
	.byte 0x00
_08052E78:
	.4byte gLCDRegisterBuffer
_08052E7C:
	.4byte gUnknown_03006A30
_08052E80:
	.4byte gUnknown_03000450
_08052E84:
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052EA4  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, r3
	cmp r0, r1
	ble _08052EA8
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #1
	strh r1, [r0]
	b _08052EB0
_08052EA4:
	.4byte gUnknown_03000450
_08052EA8:
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #0
	strh r1, [r0]
_08052EB0:
	b _08052F64
_08052EB2:
	ldr r1, [r7, #12]
	mov r2, #54
	ldrsh r0, [r1, r2]
	ldr r1, _08052EE4  @ =gUnknown_03000450
	mov r3, #34
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	add r1, r1, #176
	cmp r0, r1
	ble _08052F16
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052EE4  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	sub r1, r1, #16
	cmp r0, r1
	bge _08052EE8
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #5
	strh r1, [r0]
	b _08052F14
_08052EE4:
	.4byte gUnknown_03000450
_08052EE8:
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052F08  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, r3
	cmp r0, r1
	ble _08052F0C
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #3
	strh r1, [r0]
	b _08052F14
_08052F08:
	.4byte gUnknown_03000450
_08052F0C:
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #4
	strh r1, [r0]
_08052F14:
	b _08052F64
_08052F16:
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052F34  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	add r1, r2, #0
	sub r1, r1, #16
	cmp r0, r1
	bge _08052F38
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #6
	strh r1, [r0]
	b _08052F64
_08052F34:
	.4byte gUnknown_03000450
_08052F38:
	ldr r1, [r7, #12]
	mov r2, #50
	ldrsh r0, [r1, r2]
	ldr r1, _08052F58  @ =gUnknown_03000450
	mov r3, #32
	ldrsh r2, [r1, r3]
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, r3
	cmp r0, r1
	ble _08052F5C
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #2
	strh r1, [r0]
	b _08052F64
_08052F58:
	.4byte gUnknown_03000450
_08052F5C:
	add r0, r7, #0
	add r0, r0, #8
	mov r1, #255
	strh r1, [r0]
_08052F64:
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r1, r1, #8
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #8
	ldrh r1, [r0]
	cmp r1, #255
	beq _08053016
	ldr r0, [r7]
	ldr r2, [r7, #4]
	add r1, r2, #0
	add r1, r1, #24
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldr r1, [r7]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r3, [r2]
	add r2, r3, #0
	add r2, r2, #12
	add r3, r1, #0
	add r4, r1, #0
	add r4, r4, #96
	add r1, r4, r2
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #12
	add r2, r0, #0
	add r0, r0, #96
	add r1, r0, r1
	ldr r0, [r7]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #12
	add r2, r0, #0
	add r3, r0, #0
	add r3, r3, #96
	add r0, r3, r1
	ldr r1, [r7]
	add r2, r7, #0
	add r2, r2, #8
	ldrh r3, [r2]
	add r2, r3, #0
	add r2, r2, #12
	add r3, r1, #0
	add r1, r1, #96
	add r2, r1, r2
	ldrb r3, [r2]
	add r1, r3, #1
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08053016:
	ldr r0, [r7, #4]
	add r1, r0, #1
	str r1, [r7, #4]
	b _08052E12
_0805301E:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08052CE4

	.byte 0x00
	.byte 0x00
