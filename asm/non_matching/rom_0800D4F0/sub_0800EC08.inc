	THUMB_FUNC_START sub_0800EC08
sub_0800EC08: @ 0x0800EC08
	push {r4-r6,lr}
	add r5, r0, #0
	add r4, r1, #0
	ldr r0, _0800EC24  @ =0x000F423F
	cmp r5, r0
	bls _0800EC30
	ldr r0, _0800EC28  @ =0x0098967F
	cmp r5, r0
	bls _0800EC1C
	add r5, r0, #0
_0800EC1C:
	ldr r1, _0800EC2C  @ =gUnknown_0202E150
	mov r0, #7
	b _0800EC90
	.byte 0x00
	.byte 0x00
_0800EC24:
	.4byte 0x000F423F
_0800EC28:
	.4byte 0x0098967F
_0800EC2C:
	.4byte gUnknown_0202E150
_0800EC30:
	ldr r0, _0800EC3C  @ =0x0001869F
	cmp r5, r0
	bls _0800EC44
	ldr r1, _0800EC40  @ =gUnknown_0202E150
	mov r0, #6
	b _0800EC90
_0800EC3C:
	.4byte 0x0001869F
_0800EC40:
	.4byte gUnknown_0202E150
_0800EC44:
	ldr r0, _0800EC50  @ =0x0000270F
	cmp r5, r0
	bls _0800EC58
	ldr r1, _0800EC54  @ =gUnknown_0202E150
	mov r0, #5
	b _0800EC90
_0800EC50:
	.4byte 0x0000270F
_0800EC54:
	.4byte gUnknown_0202E150
_0800EC58:
	ldr r0, _0800EC64  @ =0x000003E7
	cmp r5, r0
	bls _0800EC6C
	ldr r1, _0800EC68  @ =gUnknown_0202E150
	mov r0, #4
	b _0800EC90
_0800EC64:
	.4byte 0x000003E7
_0800EC68:
	.4byte gUnknown_0202E150
_0800EC6C:
	cmp r5, #99
	bls _0800EC7C
	ldr r1, _0800EC78  @ =gUnknown_0202E150
	mov r0, #3
	b _0800EC90
	.byte 0x00
	.byte 0x00
_0800EC78:
	.4byte gUnknown_0202E150
_0800EC7C:
	cmp r5, #9
	bls _0800EC8C
	ldr r1, _0800EC88  @ =gUnknown_0202E150
	mov r0, #2
	b _0800EC90
	.byte 0x00
	.byte 0x00
_0800EC88:
	.4byte gUnknown_0202E150
_0800EC8C:
	ldr r1, _0800ECA8  @ =gUnknown_0202E150
	mov r0, #1
_0800EC90:
	str r0, [r1]
	add r6, r1, #0
	ldr r0, [r6]
	sub r0, r0, #2
	cmp r0, #5
	bhi _0800ED50
	lsl r0, r0, #2
	ldr r1, _0800ECAC  @ =0x0800ECB0
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0800ECA8:
	.4byte gUnknown_0202E150
_0800ECAC:
	.4byte 0x0800ECB0
	.4byte _0800ED3A
	.4byte _0800ED22
	.4byte _0800ED0A
	.4byte _0800ECF4
	.4byte _0800ECDE
	.4byte _0800ECC8
_0800ECC8:
	ldr r1, _0800ED6C  @ =0x00989680
	add r0, r5, #0
	bl __umodsi3
	ldr r1, _0800ED70  @ =0x000F4240
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ECDE:
	ldr r1, _0800ED70  @ =0x000F4240
	add r0, r5, #0
	bl __umodsi3
	ldr r1, _0800ED74  @ =0x000186A0
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ECF4:
	ldr r1, _0800ED74  @ =0x000186A0
	add r0, r5, #0
	bl __umodsi3
	ldr r1, _0800ED78  @ =0x00002710
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ED0A:
	ldr r1, _0800ED78  @ =0x00002710
	add r0, r5, #0
	bl __umodsi3
	mov r1, #250
	lsl r1, r1, #2
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ED22:
	mov r1, #250
	lsl r1, r1, #2
	add r0, r5, #0
	bl __umodsi3
	mov r1, #100
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ED3A:
	add r0, r5, #0
	mov r1, #100
	bl __umodsi3
	mov r1, #10
	bl __udivsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	add r4, r4, #1
_0800ED50:
	add r0, r5, #0
	mov r1, #10
	bl __umodsi3
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r4]
	mov r0, #0
	strb r0, [r4, #1]
	ldr r0, [r6]
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800ED6C:
	.4byte 0x00989680
_0800ED70:
	.4byte 0x000F4240
_0800ED74:
	.4byte 0x000186A0
_0800ED78:
	.4byte 0x00002710
	THUMB_FUNC_END sub_0800EC08

