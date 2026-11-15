	THUMB_FUNC_START sub_08085D08
sub_08085D08: @ 0x08085D08
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r7, r0, #0
	ldr r4, _08085D7C  @ =gRam
	mov r0, #192
	lsl r0, r0, #4
	add r0, r0, r4
	mov r8, r0
	ldrh r0, [r0]
	ldr r6, _08085D80  @ =gUnknown_0200CBA0
	add r0, r0, r6
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	ldr r1, _08085D84  @ =0x00000BFE
	add r3, r4, r1
	ldr r1, _08085D88  @ =gUnknown_081676B2
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r3]
	ldrh r2, [r0]
	orr r1, r1, r2
	mov r5, #0
	strh r1, [r3]
	ldr r3, _08085D8C  @ =0x00000AA6
	add r1, r4, r3
	ldrh r0, [r1]
	orr r0, r0, r2
	strh r0, [r1]
	ldr r1, _08085D90  @ =0x00000C04
	add r0, r4, r1
	strh r7, [r0]
	ldr r2, _08085D94  @ =0x00000978
	add r0, r4, r2
	strh r5, [r0]
	mov r3, r8
	ldrh r0, [r3]
	add r0, r0, r6
	ldrb r0, [r0]
	mov r7, #15
	and r7, r7, r0
	add r0, r7, #0
	bl sub_0808590C
	lsl r0, r7, #1
	ldr r1, _08085D98  @ =0x000018F0
	add r4, r4, r1
	add r0, r0, r4
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _08085D9C
	bl sub_0808A0CC
	b _08085DB4
	.byte 0x00
	.byte 0x00
_08085D7C:
	.4byte gRam
_08085D80:
	.4byte gUnknown_0200CBA0
_08085D84:
	.4byte 0x00000BFE
_08085D88:
	.4byte gUnknown_081676B2
_08085D8C:
	.4byte 0x00000AA6
_08085D90:
	.4byte 0x00000C04
_08085D94:
	.4byte 0x00000978
_08085D98:
	.4byte 0x000018F0
_08085D9C:
	cmp r1, #1
	bne _08085DA6
	bl sub_0808A108
	b _08085DB4
_08085DA6:
	cmp r1, #2
	bne _08085DB0
	bl sub_0808A144
	b _08085DB4
_08085DB0:
	bl sub_0808A180
_08085DB4:
	ldr r5, _08085E44  @ =gRam
	ldr r2, _08085E48  @ =0x000016C4
	add r0, r5, r2
	ldr r3, _08085E4C  @ =0x00000952
	add r1, r5, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r2, _08085E50  @ =0x00000504
	add r1, r5, r2
	strh r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r5, r3
	ldr r3, _08085E54  @ =0x00000958
	add r2, r5, r3
	ldrh r0, [r0]
	ldrh r2, [r2]
	sub r0, r0, r2
	ldr r3, _08085E58  @ =0x00000506
	add r2, r5, r3
	strh r0, [r2]
	mov r0, #55
	bl sub_0812A324
	ldr r1, _08085E5C  @ =0x00000C02
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #16
	bne _08085E3A
	mov r2, #192
	lsl r2, r2, #4
	add r4, r5, r2
	ldrh r0, [r4]
	ldr r3, _08085E60  @ =gUnknown_0200CBA0
	add r0, r0, r3
	ldrb r1, [r0]
	mov r6, #15
	add r0, r6, #0
	and r0, r0, r1
	bl sub_08089EBC
	ldrh r0, [r4]
	ldr r1, _08085E60  @ =gUnknown_0200CBA0
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #239
	bls _08085E30
	add r7, r6, #0
	and r7, r7, r0
	lsl r0, r7, #1
	ldr r2, _08085E64  @ =0x000018B0
	add r1, r5, r2
	add r0, r0, r1
	ldrh r0, [r0]
	sub r0, r0, #32
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #7
	bhi _08085E30
	bl sub_08085A4C
_08085E30:
	ldr r0, _08085E44  @ =gRam
	ldr r3, _08085E68  @ =0x000009AD
	add r0, r0, r3
	mov r1, #0
	strb r1, [r0]
_08085E3A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08085E44:
	.4byte gRam
_08085E48:
	.4byte 0x000016C4
_08085E4C:
	.4byte 0x00000952
_08085E50:
	.4byte 0x00000504
_08085E54:
	.4byte 0x00000958
_08085E58:
	.4byte 0x00000506
_08085E5C:
	.4byte 0x00000C02
_08085E60:
	.4byte gUnknown_0200CBA0
_08085E64:
	.4byte 0x000018B0
_08085E68:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_08085D08

