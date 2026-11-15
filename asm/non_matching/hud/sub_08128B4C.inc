	THUMB_FUNC_START sub_08128B4C
sub_08128B4C: @ 0x08128B4C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r2, _08128B74  @ =gRam
	ldr r1, _08128B78  @ =0x00000544
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	bne _08128B84
	ldr r2, _08128B7C  @ =0x00001AE4
	add r0, r5, r2
	ldrb r1, [r0]
	ldr r3, _08128B80  @ =0x00000964
	add r0, r5, r3
	b _08128B8E
_08128B74:
	.4byte gRam
_08128B78:
	.4byte 0x00000544
_08128B7C:
	.4byte 0x00001AE4
_08128B80:
	.4byte 0x00000964
_08128B84:
	ldr r1, _08128CA8  @ =0x00001AE4
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _08128CAC  @ =0x00000964
	add r0, r5, r2
_08128B8E:
	strh r1, [r0]
	ldr r3, _08128CB0  @ =0x0000098E
	add r0, r5, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _08128BA0
	b _08128CF4
_08128BA0:
	ldr r0, _08128CAC  @ =0x00000964
	add r1, r5, r0
	mov r2, #0
	ldrsh r0, [r1, r2]
	cmp r0, #0
	bge _08128BAE
	b _08128E02
_08128BAE:
	ldr r3, _08128CB4  @ =0x00000EFF
	mov r8, r3
	mov r4, #0
	ldr r0, _08128CB8  @ =0x00001AD8
	add r0, r0, r5
	mov r12, r0
	add r6, r1, #0
	ldr r1, _08128CBC  @ =0x00001AD2
	add r7, r5, r1
	ldr r2, _08128CC0  @ =0x00001AD6
	add r2, r2, r5
	mov r9, r2
_08128BC6:
	mov r3, #0
_08128BC8:
	ldr r0, _08128CC4  @ =gUnknown_02003080
	add r2, r3, r0
	add r0, r0, #4
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128CC8  @ =gUnknown_02003088
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128CCC  @ =gUnknown_0200308C
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128CD0  @ =gUnknown_02003090
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128CD4  @ =gUnknown_02003094
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128CD8  @ =gUnknown_02003098
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128CDC  @ =gUnknown_0200309C
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r2, _08128CE0  @ =gUnknown_02003300
	add r0, r3, r2
	ldr r0, [r0]
	str r0, [r1]
	add r3, r3, #32
	cmp r3, r8
	ble _08128BC8
	ldr r0, _08128CE4  @ =gUnknown_02003F7C
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	mov r3, r12
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r2, #15
	and r2, r2, r0
	cmp r2, #0
	bne _08128C9A
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	mov r0, #128
	mov r1, r9
	strh r0, [r1]
	ldr r0, _08128CE8  @ =gUnknown_08180C82
	ldrh r1, [r0, #4]
	ldr r3, _08128CEC  @ =0x00001AF2
	add r0, r5, r3
	strh r1, [r0]
	ldr r0, _08128CF0  @ =0x00001AF0
	add r1, r5, r0
	mov r0, #1
	strh r0, [r1]
	mov r1, #215
	lsl r1, r1, #5
	add r0, r5, r1
	strh r2, [r0]
	strh r2, [r6]
_08128C9A:
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bge _08128BC6
	b _08128E02
_08128CA8:
	.4byte 0x00001AE4
_08128CAC:
	.4byte 0x00000964
_08128CB0:
	.4byte 0x0000098E
_08128CB4:
	.4byte 0x00000EFF
_08128CB8:
	.4byte 0x00001AD8
_08128CBC:
	.4byte 0x00001AD2
_08128CC0:
	.4byte 0x00001AD6
_08128CC4:
	.4byte gUnknown_02003080
_08128CC8:
	.4byte gUnknown_02003088
_08128CCC:
	.4byte gUnknown_0200308C
_08128CD0:
	.4byte gUnknown_02003090
_08128CD4:
	.4byte gUnknown_02003094
_08128CD8:
	.4byte gUnknown_02003098
_08128CDC:
	.4byte gUnknown_0200309C
_08128CE0:
	.4byte gUnknown_02003300
_08128CE4:
	.4byte gUnknown_02003F7C
_08128CE8:
	.4byte gUnknown_08180C82
_08128CEC:
	.4byte 0x00001AF2
_08128CF0:
	.4byte 0x00001AF0
_08128CF4:
	ldr r2, _08128E14  @ =0x00000964
	add r1, r5, r2
	mov r3, #0
	ldrsh r0, [r1, r3]
	cmp r0, #0
	bge _08128D02
	b _08128E02
_08128D02:
	ldr r0, _08128E18  @ =0x00000FBF
	mov r8, r0
	mov r4, #0
	ldr r2, _08128E1C  @ =0x00001AD8
	add r2, r2, r5
	mov r12, r2
	add r6, r1, #0
	ldr r3, _08128E20  @ =gUnknown_08180C82
	mov r10, r3
	ldr r0, _08128E24  @ =0x00001AD2
	add r7, r5, r0
	ldr r1, _08128E28  @ =0x00001AD6
	add r1, r1, r5
	mov r9, r1
_08128D1E:
	mov r3, #0
_08128D20:
	ldr r0, _08128E2C  @ =gUnknown_02003080
	add r2, r3, r0
	add r0, r0, #4
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128E30  @ =gUnknown_02003088
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128E34  @ =gUnknown_0200308C
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128E38  @ =gUnknown_02003090
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128E3C  @ =gUnknown_02003094
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r0, _08128E40  @ =gUnknown_02003098
	add r2, r3, r0
	ldr r0, [r2]
	str r0, [r1]
	ldr r0, _08128E44  @ =gUnknown_0200309C
	add r1, r3, r0
	ldr r0, [r1]
	str r0, [r2]
	ldr r2, _08128E48  @ =gUnknown_02003320
	add r0, r3, r2
	ldr r0, [r0]
	str r0, [r1]
	add r3, r3, #32
	cmp r3, r8
	ble _08128D20
	ldr r0, _08128E4C  @ =gUnknown_0200403C
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	sub r0, r0, #32
	str r4, [r0]
	mov r3, r12
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	mov r2, #15
	and r2, r2, r0
	cmp r2, #0
	bne _08128DF6
	ldrh r0, [r7]
	add r0, r0, #1
	strh r0, [r7]
	mov r0, #128
	mov r1, r9
	strh r0, [r1]
	mov r3, r10
	ldrh r1, [r3, #4]
	ldr r3, _08128E50  @ =0x00001AF2
	add r0, r5, r3
	strh r1, [r0]
	ldr r0, _08128E54  @ =0x00001AF0
	add r1, r5, r0
	mov r0, #1
	strh r0, [r1]
	mov r1, #215
	lsl r1, r1, #5
	add r0, r5, r1
	strh r2, [r0]
	strh r2, [r6]
_08128DF6:
	ldrh r0, [r6]
	sub r0, r0, #1
	strh r0, [r6]
	lsl r0, r0, #16
	cmp r0, #0
	bge _08128D1E
_08128E02:
	mov r0, #0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08128E14:
	.4byte 0x00000964
_08128E18:
	.4byte 0x00000FBF
_08128E1C:
	.4byte 0x00001AD8
_08128E20:
	.4byte gUnknown_08180C82
_08128E24:
	.4byte 0x00001AD2
_08128E28:
	.4byte 0x00001AD6
_08128E2C:
	.4byte gUnknown_02003080
_08128E30:
	.4byte gUnknown_02003088
_08128E34:
	.4byte gUnknown_0200308C
_08128E38:
	.4byte gUnknown_02003090
_08128E3C:
	.4byte gUnknown_02003094
_08128E40:
	.4byte gUnknown_02003098
_08128E44:
	.4byte gUnknown_0200309C
_08128E48:
	.4byte gUnknown_02003320
_08128E4C:
	.4byte gUnknown_0200403C
_08128E50:
	.4byte 0x00001AF2
_08128E54:
	.4byte 0x00001AF0
	THUMB_FUNC_END sub_08128B4C

