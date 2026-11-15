	THUMB_FUNC_START sub_08085E6C
sub_08085E6C: @ 0x08085E6C
	push {r4-r6,lr}
	mov r5, #2
	ldr r4, _08085F70  @ =gRam
	ldr r0, _08085F74  @ =0x00000C02
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #4
	beq _08085EB8
	mov r5, #4
	cmp r0, #12
	bne _08085F10
	mov r1, #192
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	ldr r2, _08085F78  @ =gUnknown_0200CBA0
	add r0, r0, r2
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	ldr r1, _08085F7C  @ =0x00000BFE
	add r3, r4, r1
	ldr r1, _08085F80  @ =gUnknown_081676B2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r3]
	ldrh r2, [r0]
	orr r1, r1, r2
	strh r1, [r3]
	ldr r3, _08085F84  @ =0x00000AA6
	add r1, r4, r3
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
_08085EB8:
	ldr r1, _08085F88  @ =0x00000C04
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _08085F8C  @ =0x00000978
	add r1, r4, r2
	mov r0, #0
	strh r0, [r1]
	mov r3, #192
	lsl r3, r3, #4
	add r0, r4, r3
	ldrh r0, [r0]
	ldr r1, _08085F78  @ =gUnknown_0200CBA0
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	bl sub_0808590C
	bl sub_08089F74
	ldr r2, _08085F90  @ =0x000016C4
	add r0, r4, r2
	ldr r3, _08085F94  @ =0x00000952
	add r1, r4, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _08085F98  @ =0x00000504
	add r1, r4, r2
	strh r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldr r3, _08085F9C  @ =0x00000958
	add r2, r4, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08085FA0  @ =0x00000506
	add r2, r4, r3
	strh r0, [r2]
	mov r0, #55
	bl sub_0812A324
_08085F10:
	ldr r6, _08085F70  @ =gRam
	ldr r1, _08085F74  @ =0x00000C02
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #16
	bne _08085F68
	mov r2, #192
	lsl r2, r2, #4
	add r4, r6, r2
	ldrh r0, [r4]
	ldr r3, _08085F78  @ =gUnknown_0200CBA0
	add r0, r0, r3
	ldrb r1, [r0]
	mov r5, #15
	add r0, r5, #0
	and r0, r0, r1
	bl sub_08089EBC
	ldrh r0, [r4]
	ldr r1, _08085F78  @ =gUnknown_0200CBA0
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #239
	bls _08085F5E
	and r5, r5, r0
	lsl r0, r5, #1
	ldr r2, _08085FA4  @ =0x000018B0
	add r1, r6, r2
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	sub r0, r0, #32
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #7
	bhi _08085F5E
	bl sub_08085A4C
_08085F5E:
	ldr r0, _08085F70  @ =gRam
	ldr r3, _08085FA8  @ =0x000009AD
	add r0, r0, r3
	mov r1, #0
	strb r1, [r0]
_08085F68:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08085F70:
	.4byte gRam
_08085F74:
	.4byte 0x00000C02
_08085F78:
	.4byte gUnknown_0200CBA0
_08085F7C:
	.4byte 0x00000BFE
_08085F80:
	.4byte gUnknown_081676B2
_08085F84:
	.4byte 0x00000AA6
_08085F88:
	.4byte 0x00000C04
_08085F8C:
	.4byte 0x00000978
_08085F90:
	.4byte 0x000016C4
_08085F94:
	.4byte 0x00000952
_08085F98:
	.4byte 0x00000504
_08085F9C:
	.4byte 0x00000958
_08085FA0:
	.4byte 0x00000506
_08085FA4:
	.4byte 0x000018B0
_08085FA8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08085E6C

