	THUMB_FUNC_START sub_08080D00
sub_08080D00: @ 0x08080D00
	push {r4-r6,lr}
	ldr r1, _08080D44  @ =gRam
	mov r0, #188
	lsl r0, r0, #4
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r2, _08080D48  @ =0x00000BC4
	add r0, r1, r2
	strb r3, [r0]
	ldr r4, _08080D4C  @ =0x00000BBF
	add r0, r1, r4
	strb r3, [r0]
	ldr r6, _08080D50  @ =0x000009AD
	add r0, r1, r6
	ldrb r0, [r0]
	add r2, r0, #0
	add r5, r1, #0
	cmp r2, #0
	bne _08080D64
	ldr r1, _08080D54  @ =0x00000952
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r0, _08080D58  @ =0xFFFFFE00
	and r0, r0, r1
	ldr r2, _08080D5C  @ =0x00000BA8
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _08080D60  @ =0x00000958
	add r0, r5, r3
	ldrh r0, [r0]
	b _08080E2C
	.byte 0x00
	.byte 0x00
_08080D44:
	.4byte gRam
_08080D48:
	.4byte 0x00000BC4
_08080D4C:
	.4byte 0x00000BBF
_08080D50:
	.4byte 0x000009AD
_08080D54:
	.4byte 0x00000952
_08080D58:
	.4byte 0xFFFFFE00
_08080D5C:
	.4byte 0x00000BA8
_08080D60:
	.4byte 0x00000958
_08080D64:
	cmp r2, #22
	beq _08080D72
	sub r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #12
	bhi _08080DA4
_08080D72:
	ldr r4, _08080D94  @ =0x00000952
	add r0, r5, r4
	ldrh r0, [r0]
	add r0, r0, #32
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, _08080D98  @ =0xFFFFFE00
	and r0, r0, r1
	ldr r6, _08080D9C  @ =0x00000BA8
	add r1, r5, r6
	strh r0, [r1]
	ldr r1, _08080DA0  @ =0x00000958
	add r0, r5, r1
	ldrh r0, [r0]
	add r0, r0, #32
	b _08080E28
	.byte 0x00
	.byte 0x00
_08080D94:
	.4byte 0x00000952
_08080D98:
	.4byte 0xFFFFFE00
_08080D9C:
	.4byte 0x00000BA8
_08080DA0:
	.4byte 0x00000958
_08080DA4:
	ldr r2, _08080DE4  @ =0x00001727
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	lsr r0, r0, #1
	cmp r0, #1
	bhi _08080DFC
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #25
	ldr r3, _08080DE8  @ =0x00000952
	add r2, r5, r3
	ldr r1, _08080DEC  @ =gUnknown_081532C0
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, _08080DF0  @ =0xFFFFFE00
	and r0, r0, r1
	ldr r4, _08080DF4  @ =0x00000BA8
	add r1, r5, r4
	strh r0, [r1]
	ldr r6, _08080DF8  @ =0x00000958
	add r0, r5, r6
	ldrh r0, [r0]
	add r0, r0, #32
	b _08080E28
_08080DE4:
	.4byte 0x00001727
_08080DE8:
	.4byte 0x00000952
_08080DEC:
	.4byte gUnknown_081532C0
_08080DF0:
	.4byte 0xFFFFFE00
_08080DF4:
	.4byte 0x00000BA8
_08080DF8:
	.4byte 0x00000958
_08080DFC:
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #27
	ldr r1, _08080F4C  @ =0x00000952
	add r0, r5, r1
	ldrh r0, [r0]
	add r0, r0, #32
	ldr r2, _08080F50  @ =0xFFFFFE00
	add r1, r2, #0
	and r0, r0, r1
	ldr r3, _08080F54  @ =0x00000BA8
	add r1, r5, r3
	strh r0, [r1]
	ldr r6, _08080F58  @ =0x00000958
	add r2, r5, r6
	ldr r1, _08080F5C  @ =gUnknown_081532C0
	lsl r0, r4, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
_08080E28:
	lsl r0, r0, #16
	lsr r0, r0, #16
_08080E2C:
	lsl r0, r0, #16
	asr r0, r0, #16
	ldr r1, _08080F50  @ =0xFFFFFE00
	and r0, r0, r1
	ldr r2, _08080F60  @ =0x00000BAA
	add r1, r5, r2
	strh r0, [r1]
	ldr r1, _08080F64  @ =gUnknown_08164020
	ldr r3, _08080F68  @ =0x000009DA
	add r0, r5, r3
	ldrh r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r2, [r0]
	ldr r4, _08080F6C  @ =0x00000ABA
	add r3, r5, r4
	ldrh r1, [r3]
	ldr r6, _08080F70  @ =0x00001AA4
	add r0, r5, r6
	strh r1, [r0]
	ldrb r0, [r2]
	lsr r0, r0, #5
	strh r0, [r3]
	ldrb r1, [r2]
	mov r0, #28
	and r0, r0, r1
	lsr r0, r0, #2
	ldr r3, _08080F74  @ =0x00000B14
	add r1, r5, r3
	strh r0, [r1]
	ldr r4, _08080F78  @ =0x00000CF5
	add r3, r5, r4
	ldrb r1, [r3]
	ldr r6, _08080F7C  @ =0x00000CF6
	add r0, r5, r6
	strb r1, [r0]
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	strb r0, [r3]
	ldrb r0, [r2, #1]
	lsl r4, r0, #2
	ldr r3, _08080F80  @ =gUnknown_0822BC6C
	add r0, r4, r3
	ldrb r1, [r0]
	sub r6, r6, #72
	add r0, r5, r6
	strb r1, [r0]
	add r0, r4, #1
	add r0, r0, r3
	ldrb r1, [r0]
	sub r6, r6, #10
	add r0, r5, r6
	strb r1, [r0]
	add r0, r4, #2
	add r0, r0, r3
	ldrb r1, [r0]
	add r6, r6, #1
	add r0, r5, r6
	strb r1, [r0]
	add r0, r4, #3
	add r0, r0, r3
	ldrb r1, [r0]
	ldr r3, _08080F84  @ =0x00000CA6
	add r0, r5, r3
	strb r1, [r0]
	ldrb r1, [r2, #2]
	ldr r4, _08080F88  @ =0x00000C9A
	add r0, r5, r4
	strb r1, [r0]
	ldrb r0, [r2, #3]
	add r0, r0, #64
	sub r6, r6, #10
	add r1, r5, r6
	strb r0, [r1]
	ldrb r1, [r2, #4]
	ldr r3, _08080F8C  @ =0x000009E5
	add r0, r5, r3
	strb r1, [r0]
	ldrb r1, [r2, #5]
	ldr r4, _08080F90  @ =0x000009E6
	add r0, r5, r4
	strb r1, [r0]
	ldrb r1, [r2, #6]
	ldr r6, _08080F94  @ =0x000009E7
	add r0, r5, r6
	strb r1, [r0]
	ldrb r1, [r2, #7]
	mov r3, #3
	add r0, r3, #0
	and r0, r0, r1
	ldr r4, _08080F98  @ =0x00000BBA
	add r1, r5, r4
	strb r0, [r1]
	ldrb r1, [r2, #7]
	mov r0, #12
	and r0, r0, r1
	lsr r0, r0, #2
	ldr r6, _08080F9C  @ =0x00000BBB
	add r1, r5, r6
	strb r0, [r1]
	ldrb r1, [r2, #7]
	mov r0, #48
	and r0, r0, r1
	lsr r0, r0, #4
	add r4, r4, #2
	add r1, r5, r4
	strb r0, [r1]
	ldrb r0, [r2, #7]
	lsr r0, r0, #6
	add r6, r6, #2
	add r1, r5, r6
	strb r0, [r1]
	ldrb r0, [r2, #8]
	and r3, r3, r0
	ldr r1, _08080FA0  @ =0x00000BBE
	add r0, r5, r1
	strb r3, [r0]
	ldrb r1, [r2, #9]
	mov r3, #207
	lsl r3, r3, #4
	add r0, r5, r3
	strb r1, [r0]
	ldrb r1, [r2, #10]
	ldr r4, _08080FA4  @ =0x00000CF1
	add r0, r5, r4
	strb r1, [r0]
	ldrb r1, [r2, #11]
	ldr r6, _08080FA8  @ =0x00000CF2
	add r0, r5, r6
	strb r1, [r0]
	ldrb r1, [r2, #12]
	add r3, r3, #3
	add r0, r5, r3
	strb r1, [r0]
	ldrb r1, [r2, #13]
	add r4, r4, #3
	add r0, r5, r4
	strb r1, [r0]
	bl sub_080814BC
	pop {r4-r6}
	pop {r0}
	bx r0
_08080F4C:
	.4byte 0x00000952
_08080F50:
	.4byte 0xFFFFFE00
_08080F54:
	.4byte 0x00000BA8
_08080F58:
	.4byte 0x00000958
_08080F5C:
	.4byte gUnknown_081532C0
_08080F60:
	.4byte 0x00000BAA
_08080F64:
	.4byte gUnknown_08164020
_08080F68:
	.4byte 0x000009DA
_08080F6C:
	.4byte 0x00000ABA
_08080F70:
	.4byte 0x00001AA4
_08080F74:
	.4byte 0x00000B14
_08080F78:
	.4byte 0x00000CF5
_08080F7C:
	.4byte 0x00000CF6
_08080F80:
	.4byte gUnknown_0822BC6C
_08080F84:
	.4byte 0x00000CA6
_08080F88:
	.4byte 0x00000C9A
_08080F8C:
	.4byte 0x000009E5
_08080F90:
	.4byte 0x000009E6
_08080F94:
	.4byte 0x000009E7
_08080F98:
	.4byte 0x00000BBA
_08080F9C:
	.4byte 0x00000BBB
_08080FA0:
	.4byte 0x00000BBE
_08080FA4:
	.4byte 0x00000CF1
_08080FA8:
	.4byte 0x00000CF2
	THUMB_FUNC_END sub_08080D00

