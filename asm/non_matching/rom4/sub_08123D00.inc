	THUMB_FUNC_START sub_08123D00
sub_08123D00: @ 0x08123D00
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r1, _08123D64  @ =gRam
	ldr r3, _08123D68  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #0
	beq _08123D20
	b _08123EC8
_08123D20:
	ldr r6, _08123D6C  @ =gUnknown_02003080
	add r4, r2, r6
	ldrb r0, [r4]
	cmp r0, #0
	beq _08123D7E
	ldr r0, _08123D70  @ =gUnknown_02003088
	add r6, r2, r0
	ldrb r0, [r6]
	sub r0, r0, #1
	strb r0, [r6]
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _08123D3E
	b _08123EC8
_08123D3E:
	ldrb r0, [r4]
	add r1, r0, #1
	strb r1, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _08123D58
	lsl r1, r2, #2
	ldr r2, _08123D74  @ =0x00000968
	add r0, r3, r2
	strb r1, [r0]
	bl sub_08123F94
_08123D58:
	ldrb r0, [r4]
	cmp r0, #11
	bne _08123D78
	strb r5, [r4]
	strb r5, [r6]
	b _08123EC8
_08123D64:
	.4byte gRam
_08123D68:
	.4byte 0x000009AD
_08123D6C:
	.4byte gUnknown_02003080
_08123D70:
	.4byte gUnknown_02003088
_08123D74:
	.4byte 0x00000968
_08123D78:
	mov r0, #3
	strb r0, [r6]
	b _08123EC8
_08123D7E:
	mov r4, #1
	eor r5, r5, r4
	ldr r1, _08123E04  @ =gUnknown_02003080
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #6
	beq _08123D8E
	b _08123EC8
_08123D8E:
	ldr r2, _08123E08  @ =gUnknown_02003088
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #2
	beq _08123D9A
	b _08123EC8
_08123D9A:
	ldr r1, _08123E0C  @ =0x00001813
	add r0, r3, r1
	ldrb r5, [r0]
	ldr r0, _08123E10  @ =0x00000E29
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	cmp r0, #6
	ble _08123DAE
	b _08123EC8
_08123DAE:
	strb r0, [r1]
	add r0, r5, r6
	strb r4, [r0]
	add r1, r5, r2
	mov r0, #3
	strb r0, [r1]
	ldr r2, _08123E14  @ =0x0000096C
	add r1, r3, r2
	mov r0, #3
	strb r0, [r1]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r3
	mov r9, r0
	ldr r1, _08123E18  @ =0x00000964
	add r1, r1, r3
	mov r8, r1
	ldr r2, _08123E1C  @ =0x00001733
	add r2, r2, r3
	mov r10, r2
_08123DD6:
	mov r0, #0
	mov r1, r9
	strh r0, [r1]
	mov r2, r8
	strh r0, [r2]
	ldr r0, _08123E20  @ =gUnknown_03002B98
	strb r5, [r0]
	ldr r0, _08123E24  @ =gUnknown_0200309C
	ldrb r0, [r0]
	cmp r0, #3
	bls _08123E28
	mov r4, #13
	strh r4, [r1]
	ldr r1, _08123E14  @ =0x0000096C
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08123E42
	neg r0, r4
	mov r2, r9
	b _08123E40
_08123E04:
	.4byte gUnknown_02003080
_08123E08:
	.4byte gUnknown_02003088
_08123E0C:
	.4byte 0x00001813
_08123E10:
	.4byte 0x00000E29
_08123E14:
	.4byte 0x0000096C
_08123E18:
	.4byte 0x00000964
_08123E1C:
	.4byte 0x00001733
_08123E20:
	.4byte gUnknown_03002B98
_08123E24:
	.4byte gUnknown_0200309C
_08123E28:
	mov r4, #13
	mov r0, r8
	strh r4, [r0]
	ldr r1, _08123F5C  @ =0x0000096C
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _08123E42
	neg r0, r4
	mov r2, r8
_08123E40:
	strh r0, [r2]
_08123E42:
	ldr r4, _08123F60  @ =gRam
	ldr r3, _08123F64  @ =0x00000968
	add r0, r4, r3
	ldrb r1, [r0]
	lsl r1, r1, #3
	mov r2, #151
	lsl r2, r2, #4
	add r0, r4, r2
	strb r1, [r0]
	add r3, r3, #4
	add r7, r4, r3
	ldrb r0, [r7]
	lsl r0, r0, #1
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r2, r1, #24
	ldr r0, _08123F68  @ =gUnknown_020030A0
	add r1, r2, r0
	mov r3, r9
	ldrh r0, [r3]
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r0, _08123F6C  @ =gUnknown_020030B0
	add r2, r2, r0
	mov r3, r8
	ldrh r1, [r3]
	ldrh r0, [r2]
	add r1, r1, r0
	strh r1, [r2]
	ldr r3, _08123F70  @ =0x00001732
	add r6, r4, r3
	ldr r0, _08123F74  @ =0x00000952
	add r3, r4, r0
	ldrb r0, [r3]
	sub r1, r1, r0
	strb r1, [r6]
	ldrh r0, [r2]
	mov r2, #0
	ldrsh r1, [r3, r2]
	sub r0, r0, r1
	mov r1, #255
	lsl r1, r1, #8
	and r0, r0, r1
	asr r0, r0, #8
	mov r3, r10
	strb r0, [r3]
	cmp r0, #0
	bne _08123EBA
	ldrb r0, [r6]
	ldr r2, _08123F78  @ =0x00000504
	add r1, r4, r2
	strh r0, [r1]
	ldr r3, _08123F7C  @ =0x00000506
	add r2, r4, r3
	mov r0, #128
	strh r0, [r2]
	mov r0, #41
	bl sub_0812A324
_08123EBA:
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	add r3, r4, #0
	cmp r0, #0
	bge _08123DD6
_08123EC8:
	ldr r1, _08123F60  @ =gRam
	ldr r2, _08123F80  @ =0x00001813
	add r0, r1, r2
	ldrb r5, [r0]
	ldr r3, _08123F84  @ =gUnknown_02003080
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _08123F16
	mov r4, #3
	cmp r5, #1
	bne _08123EE2
	mov r4, #7
_08123EE2:
	add r6, r1, #0
	ldr r0, _08123F88  @ =0x00000964
	add r7, r6, r0
_08123EE8:
	lsl r0, r4, #25
	lsr r2, r0, #24
	ldr r1, _08123F68  @ =gUnknown_020030A0
	add r0, r2, r1
	ldrh r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r6, r3
	strh r1, [r0]
	ldr r1, _08123F6C  @ =gUnknown_020030B0
	add r0, r2, r1
	ldrh r0, [r0]
	strh r0, [r7]
	add r0, r5, #0
	bl sub_0811B9BC
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #3
	and r0, r0, r4
	cmp r0, #3
	bne _08123EE8
_08123F16:
	ldr r0, _08123F60  @ =gRam
	ldr r2, _08123F8C  @ =0x00000E29
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #6
	bne _08123F4E
	mov r5, #1
	ldr r4, _08123F84  @ =gUnknown_02003080
_08123F28:
	add r0, r5, r4
	ldrb r1, [r0]
	cmp r1, #0
	bne _08123F4E
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _08123F28
	ldr r2, _08123F90  @ =0x00000E15
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r3, r2
	strb r1, [r0]
	mov r2, #162
	lsl r2, r2, #4
	add r0, r3, r2
	strh r1, [r0]
_08123F4E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08123F5C:
	.4byte 0x0000096C
_08123F60:
	.4byte gRam
_08123F64:
	.4byte 0x00000968
_08123F68:
	.4byte gUnknown_020030A0
_08123F6C:
	.4byte gUnknown_020030B0
_08123F70:
	.4byte 0x00001732
_08123F74:
	.4byte 0x00000952
_08123F78:
	.4byte 0x00000504
_08123F7C:
	.4byte 0x00000506
_08123F80:
	.4byte 0x00001813
_08123F84:
	.4byte gUnknown_02003080
_08123F88:
	.4byte 0x00000964
_08123F8C:
	.4byte 0x00000E29
_08123F90:
	.4byte 0x00000E15
	THUMB_FUNC_END sub_08123D00

