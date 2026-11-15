	THUMB_FUNC_START sub_08074BC4
sub_08074BC4: @ 0x08074BC4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r2, _08074CB4  @ =gRam
	ldr r0, _08074CB8  @ =0x00000968
	add r0, r0, r2
	mov r8, r0
	mov r0, #0
	mov r1, r8
	strh r0, [r1]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	ldr r4, _08074CBC  @ =0x00000958
	add r3, r2, r4
	ldrh r1, [r0]
	ldrh r0, [r3]
	sub r1, r1, r0
	add r1, r1, #12
	ldr r0, _08074CC0  @ =0x0000097C
	add r6, r2, r0
	strh r1, [r6]
	ldr r4, _08074CC4  @ =0x00000BDC
	add r3, r2, r4
	ldrh r0, [r3]
	sub r1, r1, r0
	mov r0, #189
	lsl r0, r0, #4
	add r4, r2, r0
	strh r1, [r4]
	lsl r0, r1, #16
	add r5, r2, #0
	cmp r0, #0
	bge _08074C12
	mov r2, r8
	strh r1, [r2]
_08074C12:
	ldrh r0, [r3]
	ldrh r3, [r6]
	add r2, r0, r3
	ldr r1, _08074CC8  @ =0x00000BD4
	add r0, r5, r1
	strh r2, [r0]
	ldr r3, _08074CCC  @ =0x000016C4
	add r0, r5, r3
	ldr r3, _08074CD0  @ =0x00000952
	add r1, r5, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #8
	ldr r3, _08074CD4  @ =0x00000BC8
	add r1, r5, r3
	strh r0, [r1]
	ldr r0, _08074CD8  @ =0x00000BDA
	add r1, r5, r0
	mov r0, #1
	strh r0, [r1]
	mov r3, #0
	ldrsh r1, [r4, r3]
	sub r0, r0, #21
	cmp r1, r0
	bge _08074C50
	lsl r0, r2, #16
	asr r0, r0, #16
	cmp r0, #192
	ble _08074C50
	b _08074E36
_08074C50:
	add r7, r5, #0
	mov r10, r4
	ldr r4, _08074CDC  @ =0x0000096C
	add r4, r4, r5
	mov r9, r4
_08074C5A:
	mov r0, #128
	lsl r0, r0, #1
	ldr r6, _08074CE0  @ =gUnknown_03002B90
	strh r0, [r6]
	ldr r1, _08074CE4  @ =gUnknown_03002B94
	strh r0, [r1]
	mov r2, r10
	mov r3, #0
	ldrsh r0, [r2, r3]
	cmp r0, #0
	blt _08074C86
	mov r4, r8
	mov r6, #0
	ldrsh r1, [r4, r6]
	cmp r1, r0
	blt _08074D50
	ldr r2, _08074CC8  @ =0x00000BD4
	add r0, r7, r2
	mov r3, #0
	ldrsh r0, [r0, r3]
	cmp r1, r0
	bge _08074D50
_08074C86:
	ldr r4, _08074CC4  @ =0x00000BDC
	add r0, r7, r4
	ldr r6, _08074CD8  @ =0x00000BDA
	add r1, r7, r6
	ldrh r0, [r0]
	ldrh r2, [r1]
	cmp r0, r2
	bcs _08074CE8
	mov r0, #1
	strh r0, [r1]
	mov r4, #0
	mov r3, r10
	strh r4, [r3]
	sub r6, r6, #6
	add r0, r7, r6
	ldrh r0, [r0]
	mov r1, r8
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #224
	ble _08074D50
	b _08074E36
_08074CB4:
	.4byte gRam
_08074CB8:
	.4byte 0x00000968
_08074CBC:
	.4byte 0x00000958
_08074CC0:
	.4byte 0x0000097C
_08074CC4:
	.4byte 0x00000BDC
_08074CC8:
	.4byte 0x00000BD4
_08074CCC:
	.4byte 0x000016C4
_08074CD0:
	.4byte 0x00000952
_08074CD4:
	.4byte 0x00000BC8
_08074CD8:
	.4byte 0x00000BDA
_08074CDC:
	.4byte 0x0000096C
_08074CE0:
	.4byte gUnknown_03002B90
_08074CE4:
	.4byte gUnknown_03002B94
_08074CE8:
	bl sub_08074B18
	mov r2, r9
	mov r3, #0
	ldrsh r0, [r2, r3]
	cmp r0, #0
	bne _08074CFC
	mov r4, r10
	strh r0, [r4]
	b _08074D12
_08074CFC:
	ldr r6, _08074D30  @ =0x00000BC8
	add r0, r7, r6
	ldrh r1, [r0]
	ldr r0, _08074D34  @ =gUnknown_03002BA0
	ldrh r2, [r0]
	add r0, r1, r2
	ldr r3, _08074D38  @ =gUnknown_03002B94
	strh r0, [r3]
	sub r1, r1, r2
	ldr r4, _08074D3C  @ =gUnknown_03002B90
	strh r1, [r4]
_08074D12:
	ldr r6, _08074D40  @ =0x00000BDA
	add r0, r7, r6
	ldrb r1, [r0]
	ldr r3, _08074D44  @ =0x00000974
	add r2, r7, r3
	strh r1, [r2]
	mvn r1, r1
	ldr r4, _08074D48  @ =gUnknown_03002BAC
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #17
	lsr r4, r1, #16
	ldr r6, _08074D4C  @ =0xFFFFF426
	add r5, r0, r6
	b _08074D5A
_08074D30:
	.4byte 0x00000BC8
_08074D34:
	.4byte gUnknown_03002BA0
_08074D38:
	.4byte gUnknown_03002B94
_08074D3C:
	.4byte gUnknown_03002B90
_08074D40:
	.4byte 0x00000BDA
_08074D44:
	.4byte 0x00000974
_08074D48:
	.4byte gUnknown_03002BAC
_08074D4C:
	.4byte 0xFFFFF426
_08074D50:
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	lsl r0, r0, #17
	lsr r4, r0, #16
_08074D5A:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r2, [r1]
	mov r3, #0
	ldrsh r0, [r1, r3]
	cmp r0, #0
	bge _08074D6E
	mov r0, #0
	b _08074D80
_08074D6E:
	mov r3, #0
	ldrsh r1, [r1, r3]
	mov r0, #255
	lsl r0, r0, #8
	and r1, r1, r0
	cmp r1, #0
	bne _08074D86
	mov r0, #255
	and r0, r0, r2
_08074D80:
	mov r6, r9
	strh r0, [r6]
	b _08074D9C
_08074D86:
	mov r0, #128
	lsl r0, r0, #1
	cmp r1, r0
	beq _08074D96
	mov r1, #0
	mov r0, r9
	strh r1, [r0]
	b _08074D9C
_08074D96:
	mov r0, #255
	mov r2, r9
	strh r0, [r2]
_08074D9C:
	ldr r6, _08074F1C  @ =0x00000964
	add r3, r5, r6
	mov r0, #0
	ldrsh r1, [r3, r0]
	mov r0, #255
	lsl r0, r0, #8
	and r1, r1, r0
	mov r2, #255
	cmp r1, #0
	bne _08074DB2
	ldrh r2, [r3]
_08074DB2:
	mov r1, #255
	and r2, r2, r1
	ldr r6, _08074F20  @ =0x0000096C
	add r3, r5, r6
	ldrh r0, [r3]
	lsl r0, r0, #8
	add r2, r2, r0
	strh r2, [r3]
	ldr r0, _08074F24  @ =0x000001BF
	mov r12, r0
	cmp r4, r12
	bhi _08074DD0
	ldr r6, _08074F28  @ =gUnknown_02001600
	add r0, r4, r6
	strh r2, [r0]
_08074DD0:
	mov r2, r10
	mov r4, #0
	ldrsh r0, [r2, r4]
	cmp r0, #0
	blt _08074DF0
	mov r6, r8
	mov r4, #0
	ldrsh r2, [r6, r4]
	cmp r2, r0
	blt _08074E1E
	ldr r6, _08074F2C  @ =0x00000BD4
	add r0, r5, r6
	mov r4, #0
	ldrsh r0, [r0, r4]
	cmp r2, r0
	bge _08074E1E
_08074DF0:
	ldr r6, _08074F30  @ =0x00000BDA
	add r2, r5, r6
	ldrh r0, [r2]
	and r1, r1, r0
	ldr r4, _08074F34  @ =gUnknown_03002BAC
	ldrh r0, [r4]
	ldr r6, _08074F38  @ =0x0000FFFF
	add r0, r0, r6
	add r1, r1, r0
	lsl r1, r1, #17
	ldr r4, _08074F3C  @ =0xFFFE0000
	add r0, r1, r4
	lsr r4, r0, #16
	cmp r4, r12
	bhi _08074E18
	add r0, r4, #0
	ldr r6, _08074F28  @ =gUnknown_02001600
	add r0, r0, r6
	ldrh r1, [r3]
	strh r1, [r0]
_08074E18:
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
_08074E1E:
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #0
	bge _08074E30
	b _08074C5A
_08074E30:
	cmp r0, #224
	bgt _08074E36
	b _08074C5A
_08074E36:
	ldr r2, _08074F40  @ =0x000009E8
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #4
	beq _08074E42
	b _08074FAA
_08074E42:
	ldr r3, _08074F44  @ =0x00000BDE
	add r2, r5, r3
	ldrh r0, [r2]
	cmp r0, #1
	beq _08074E70
	ldr r4, _08074F48  @ =0x00000547
	add r0, r5, r4
	ldr r6, _08074F4C  @ =0x00000546
	add r1, r5, r6
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #192
	and r0, r0, r1
	cmp r0, #0
	beq _08074E70
	mov r0, #1
	strh r0, [r2]
	ldr r0, _08074F50  @ =0x00000BDC
	add r1, r5, r0
	ldrh r0, [r1]
	lsr r0, r0, #1
	strh r0, [r1]
_08074E70:
	ldr r1, _08074F44  @ =0x00000BDE
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _08074E7C
	b _08074F84
_08074E7C:
	ldr r2, _08074F50  @ =0x00000BDC
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #8
	mov r3, #0
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #191
	bls _08074F84
	ldr r4, _08074F54  @ =0x0000177E
	add r1, r5, r4
	mov r0, #1
	strb r0, [r1]
	ldr r6, _08074F58  @ =0x00000A3C
	add r1, r5, r6
	ldr r0, _08074F5C  @ =0x0000FFF3
	strh r0, [r1]
	ldr r0, _08074F60  @ =0x00000A3E
	add r1, r5, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _08074F64  @ =0x00001605
	add r0, r5, r1
	strb r3, [r0]
	ldr r2, _08074F68  @ =0x00001793
	add r0, r5, r2
	strb r3, [r0]
	sub r4, r4, #150
	add r0, r5, r4
	strb r3, [r0]
	ldr r6, _08074F6C  @ =0x00001791
	add r0, r5, r6
	strb r3, [r0]
	ldr r0, _08074F70  @ =0x00001705
	add r2, r5, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _08074F40  @ =0x000009E8
	add r1, r5, r2
	mov r0, #0
	strh r0, [r1]
	ldr r4, _08074F74  @ =0x000009AD
	add r0, r5, r4
	strb r3, [r0]
	ldr r6, _08074F78  @ =0x00000A1A
	add r0, r5, r6
	ldrh r1, [r0]
	sub r2, r2, #60
	add r0, r5, r2
	strb r1, [r0]
	add r4, r4, #11
	add r0, r5, r4
	strb r3, [r0]
	sub r6, r6, #97
	add r0, r5, r6
	strb r3, [r0]
	mov r1, #157
	lsl r1, r1, #4
	add r0, r5, r1
	strb r3, [r0]
	add r2, r2, #37
	add r0, r5, r2
	strb r3, [r0]
	add r4, r4, #26
	add r0, r5, r4
	strb r3, [r0]
	ldr r0, _08074F7C  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _08074F28  @ =gUnknown_02001600
	ldr r2, _08074F80  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	bl sub_0806BDA4
	b _08074FAA
	.byte 0x00
	.byte 0x00
_08074F1C:
	.4byte 0x00000964
_08074F20:
	.4byte 0x0000096C
_08074F24:
	.4byte 0x000001BF
_08074F28:
	.4byte gUnknown_02001600
_08074F2C:
	.4byte 0x00000BD4
_08074F30:
	.4byte 0x00000BDA
_08074F34:
	.4byte gUnknown_03002BAC
_08074F38:
	.4byte 0x0000FFFF
_08074F3C:
	.4byte 0xFFFE0000
_08074F40:
	.4byte 0x000009E8
_08074F44:
	.4byte 0x00000BDE
_08074F48:
	.4byte 0x00000547
_08074F4C:
	.4byte 0x00000546
_08074F50:
	.4byte 0x00000BDC
_08074F54:
	.4byte 0x0000177E
_08074F58:
	.4byte 0x00000A3C
_08074F5C:
	.4byte 0x0000FFF3
_08074F60:
	.4byte 0x00000A3E
_08074F64:
	.4byte 0x00001605
_08074F68:
	.4byte 0x00001793
_08074F6C:
	.4byte 0x00001791
_08074F70:
	.4byte 0x00001705
_08074F74:
	.4byte 0x000009AD
_08074F78:
	.4byte 0x00000A1A
_08074F7C:
	.4byte 0x00FC00FC
_08074F80:
	.4byte 0x01000080
_08074F84:
	ldr r6, _08074FBC  @ =0x000016EB
	add r4, r5, r6
	ldrb r0, [r4]
	sub r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08074FAA
	ldr r0, _08074FC0  @ =0x00001793
	add r1, r5, r0
	ldrb r0, [r1]
	add r3, r0, #1
	cmp r3, #4
	beq _08074FA2
	strb r3, [r1]
_08074FA2:
	ldr r0, _08074FC4  @ =gUnknown_0814DAA6
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r4]
_08074FAA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08074FBC:
	.4byte 0x000016EB
_08074FC0:
	.4byte 0x00001793
_08074FC4:
	.4byte gUnknown_0814DAA6
	THUMB_FUNC_END sub_08074BC4

