	THUMB_FUNC_START sub_08112FB0
sub_08112FB0: @ 0x08112FB0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _08113014  @ =gRam
	ldr r1, _08113018  @ =0x00000F62
	add r0, r6, r1
	add r0, r0, r4
	mov r8, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _08113030
	ldr r2, _0811301C  @ =0x00001152
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _08113020  @ =0x00001142
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #144
	strb r1, [r0]
	ldr r2, _08113024  @ =0x00000FC2
	add r0, r6, r2
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08112FEE
	b _081130EA
_08112FEE:
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	mov r0, #48
	strb r0, [r1]
	ldr r1, _08113028  @ =gUnknown_02010994
	mov r0, #255
	strb r0, [r1]
	sub r1, r1, #4
	mov r0, #21
	strb r0, [r1]
	ldr r1, _0811302C  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #20
	strb r1, [r0]
	b _081130EA
	.byte 0x00
	.byte 0x00
_08113014:
	.4byte gRam
_08113018:
	.4byte 0x00000F62
_0811301C:
	.4byte 0x00001152
_08113020:
	.4byte 0x00001142
_08113024:
	.4byte 0x00000FC2
_08113028:
	.4byte gUnknown_02010994
_0811302C:
	.4byte 0x00000F92
_08113030:
	cmp r1, #1
	bne _08113098
	ldr r2, _08113088  @ =0x00000FC2
	add r0, r6, r2
	add r0, r0, r4
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #5
	bne _0811304A
	add r0, r4, #0
	mov r1, #108
	bl sub_080CF018
_0811304A:
	ldr r1, _0811308C  @ =0x00001152
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, #1
	mov r7, #0
	strb r0, [r5]
	ldr r2, _08113090  @ =0x00001142
	add r0, r6, r2
	add r6, r4, r0
	mov r0, #0
	ldrsb r0, [r6, r0]
	cmp r0, #0
	ble _081130EA
	add r0, r4, #0
	mov r1, #13
	bl sub_080CF0AC
	strb r7, [r5]
	strb r7, [r6]
	mov r4, r8
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	mov r0, #80
	mov r1, r9
	strb r0, [r1]
	ldr r0, _08113094  @ =gUnknown_02010993
	strb r7, [r0]
	b _081130EA
	.byte 0x00
	.byte 0x00
_08113088:
	.4byte 0x00000FC2
_0811308C:
	.4byte 0x00001152
_08113090:
	.4byte 0x00001142
_08113094:
	.4byte gUnknown_02010993
_08113098:
	ldr r2, _081130F8  @ =0x00000FC2
	add r0, r6, r2
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #71
	bhi _081130B4
	ldr r1, _081130FC  @ =gUnknown_02010990
	mov r0, #10
	strb r0, [r1]
	ldr r1, _08113100  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_081130B4:
	ldrb r2, [r3]
	cmp r2, #0
	bne _081130EA
	mov r1, #48
	mov r4, r8
	strb r2, [r4]
	ldr r4, _08113100  @ =0x00000F92
	add r0, r6, r4
	add r0, r5, r0
	strb r2, [r0]
	sub r4, r4, #64
	add r0, r6, r4
	add r0, r5, r0
	strb r2, [r0]
	strb r1, [r3]
	ldr r0, _081130FC  @ =gUnknown_02010990
	strb r2, [r0]
	add r0, r0, #3
	strb r2, [r0]
	ldr r0, _08113104  @ =0x00000EA5
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	add r0, r0, #5
	strb r0, [r1]
_081130EA:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081130F8:
	.4byte 0x00000FC2
_081130FC:
	.4byte gUnknown_02010990
_08113100:
	.4byte 0x00000F92
_08113104:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_08112FB0

