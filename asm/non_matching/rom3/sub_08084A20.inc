	THUMB_FUNC_START sub_08084A20
sub_08084A20: @ 0x08084A20
	push {r4-r7,lr}
	ldr r1, _08084B00  @ =gRam
	ldr r2, _08084B04  @ =0x00001727
	add r0, r1, r2
	ldrb r4, [r0]
	add r6, r1, #0
	cmp r4, #12
	bne _08084A32
	b _08084C8A
_08084A32:
	mov r0, #12
	and r0, r0, r4
	ldr r3, _08084B08  @ =0x00000964
	add r1, r6, r3
	strh r0, [r1]
	mov r4, #182
	lsl r4, r4, #5
	add r2, r6, r4
	ldr r1, _08084B0C  @ =gUnknown_081677E4
	lsl r5, r0, #16
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r1, #252
	lsl r1, r1, #1
	add r2, r1, #0
	and r0, r0, r2
	lsl r0, r0, #3
	mov r4, #150
	lsl r4, r4, #4
	add r3, r6, r4
	ldr r4, _08084B10  @ =0x000016C4
	add r1, r6, r4
	ldrh r1, [r1]
	and r2, r2, r1
	lsr r2, r2, #3
	orr r0, r0, r2
	strh r0, [r3]
	mov r0, #0
	ldrsh r4, [r3, r0]
	mov r1, #161
	lsl r1, r1, #4
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08084A82
	mov r0, #128
	lsl r0, r0, #5
	orr r4, r4, r0
_08084A82:
	add r1, r4, #0
	asr r0, r5, #16
	cmp r0, #4
	bne _08084A8C
	add r4, r4, #128
_08084A8C:
	ldr r2, _08084B14  @ =gUnknown_0200CBA0
	add r0, r4, r2
	ldrb r5, [r0]
	add r4, r1, #0
	cmp r5, #38
	beq _08084AAA
	cmp r5, #56
	beq _08084AAA
	cmp r5, #57
	beq _08084AAA
	cmp r5, #94
	beq _08084AAA
	cmp r5, #95
	beq _08084AAA
	b _08084C8A
_08084AAA:
	ldr r3, _08084B18  @ =gUnknown_0200CBE0
	add r2, r4, r3
	ldrb r1, [r2]
	mov r0, #248
	and r0, r0, r1
	cmp r0, #48
	beq _08084ABA
	b _08084C8A
_08084ABA:
	ldr r4, _08084B1C  @ =0x00001791
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08084ACA
	b _08084C7C
_08084ACA:
	ldrb r1, [r2]
	ldr r2, _08084B20  @ =0x00000B0A
	add r0, r6, r2
	strh r1, [r0]
	ldr r3, _08084B24  @ =0x000009DA
	add r0, r6, r3
	ldrh r1, [r0]
	ldr r4, _08084B28  @ =0x000009DC
	add r0, r6, r4
	strh r1, [r0]
	bl sub_08070064
	add r0, r5, #0
	sub r0, r0, #56
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08084B34
	ldr r0, _08084B2C  @ =0x00000B0C
	add r1, r6, r0
	mov r0, #32
	strh r0, [r1]
	cmp r5, #56
	bne _08084B30
	bl sub_0806FB58
	b _08084B34
_08084B00:
	.4byte gRam
_08084B04:
	.4byte 0x00001727
_08084B08:
	.4byte 0x00000964
_08084B0C:
	.4byte gUnknown_081677E4
_08084B10:
	.4byte 0x000016C4
_08084B14:
	.4byte gUnknown_0200CBA0
_08084B18:
	.4byte gUnknown_0200CBE0
_08084B1C:
	.4byte 0x00001791
_08084B20:
	.4byte 0x00000B0A
_08084B24:
	.4byte 0x000009DA
_08084B28:
	.4byte 0x000009DC
_08084B2C:
	.4byte 0x00000B0C
_08084B30:
	bl sub_0806F8B8
_08084B34:
	ldr r2, _08084C00  @ =gRam
	ldr r1, _08084C04  @ =0x000009DA
	add r4, r2, r1
	ldrh r0, [r4]
	mov r3, #255
	lsl r3, r3, #8
	and r3, r3, r0
	ldr r6, _08084C08  @ =0x00000B0A
	add r0, r2, r6
	ldrh r0, [r0]
	mov r1, #3
	and r1, r1, r0
	ldr r6, _08084C0C  @ =0x00000CF1
	add r0, r2, r6
	add r0, r1, r0
	ldrb r0, [r0]
	orr r0, r0, r3
	mov r3, #0
	strh r0, [r4]
	ldr r4, _08084C10  @ =0x00000BBB
	add r0, r2, r4
	add r1, r1, r0
	ldrb r0, [r1]
	ldr r6, _08084C14  @ =0x00000B32
	add r7, r2, r6
	strh r0, [r7]
	mov r4, #2
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	ldrb r0, [r0]
	add r6, r2, #0
	cmp r0, #0
	bne _08084B88
	ldr r2, _08084C18  @ =0x00000B1E
	add r0, r6, r2
	ldrh r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	asr r4, r0, #31
	mov r0, #2
	and r4, r4, r0
_08084B88:
	ldr r1, _08084C1C  @ =0x00000B3A
	add r0, r6, r1
	strh r4, [r0]
	ldr r2, _08084C20  @ =0x000009E8
	add r1, r6, r2
	mov r0, #0
	strh r0, [r1]
	ldr r4, _08084C24  @ =0x000016FA
	add r0, r6, r4
	strb r3, [r0]
	ldr r1, _08084C28  @ =0x000016EB
	add r0, r6, r1
	strb r3, [r0]
	ldr r2, _08084C2C  @ =0x000016E8
	add r0, r6, r2
	strb r3, [r0]
	sub r4, r4, #16
	add r0, r6, r4
	strb r3, [r0]
	ldr r0, _08084C30  @ =0x00001705
	add r2, r6, r0
	ldrb r1, [r2]
	mov r0, #254
	and r0, r0, r1
	strb r0, [r2]
	mov r4, #6
	cmp r5, #38
	bne _08084C4E
	bl sub_08129EE0
	ldr r1, _08084C34  @ =0x000009AD
	add r0, r6, r1
	strb r4, [r0]
	ldr r2, _08084C38  @ =0x000016C4
	add r0, r6, r2
	ldr r3, _08084C3C  @ =0x00000952
	add r1, r6, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	ldr r4, _08084C40  @ =0x00000504
	add r2, r6, r4
	strh r0, [r2]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	add r3, r3, #6
	add r1, r6, r3
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r4, r4, #2
	add r1, r6, r4
	strh r0, [r1]
	ldrh r0, [r7]
	cmp r0, #51
	bls _08084C44
	mov r0, #49
	b _08084C46
	.byte 0x00
	.byte 0x00
_08084C00:
	.4byte gRam
_08084C04:
	.4byte 0x000009DA
_08084C08:
	.4byte 0x00000B0A
_08084C0C:
	.4byte 0x00000CF1
_08084C10:
	.4byte 0x00000BBB
_08084C14:
	.4byte 0x00000B32
_08084C18:
	.4byte 0x00000B1E
_08084C1C:
	.4byte 0x00000B3A
_08084C20:
	.4byte 0x000009E8
_08084C24:
	.4byte 0x000016FA
_08084C28:
	.4byte 0x000016EB
_08084C2C:
	.4byte 0x000016E8
_08084C30:
	.4byte 0x00001705
_08084C34:
	.4byte 0x000009AD
_08084C38:
	.4byte 0x000016C4
_08084C3C:
	.4byte 0x00000952
_08084C40:
	.4byte 0x00000504
_08084C44:
	mov r0, #51
_08084C46:
	add r1, r2, #0
	bl sub_0812A324
	b _08084C8A
_08084C4E:
	mov r4, #19
	cmp r5, #56
	beq _08084C6C
	mov r4, #20
	cmp r5, #57
	beq _08084C6C
	bl sub_0809DC94
	mov r4, #15
	ldr r1, _08084C68  @ =0x000009AD
	add r0, r6, r1
	strb r4, [r0]
	b _08084C8A
_08084C68:
	.4byte 0x000009AD
_08084C6C:
	ldr r2, _08084C78  @ =0x000009AD
	add r0, r6, r2
	strb r4, [r0]
	bl sub_0809E53C
	b _08084C8A
_08084C78:
	.4byte 0x000009AD
_08084C7C:
	ldr r3, _08084C90  @ =0x0000160C
	add r0, r6, r3
	ldrb r1, [r0]
	mov r4, #182
	lsl r4, r4, #5
	add r0, r6, r4
	strb r1, [r0]
_08084C8A:
	pop {r4-r7}
	pop {r0}
	bx r0
_08084C90:
	.4byte 0x0000160C
	THUMB_FUNC_END sub_08084A20

