	THUMB_FUNC_START sub_08084C94
sub_08084C94: @ 0x08084C94
	push {r4-r7,lr}
	ldr r6, _08084D50  @ =gRam
	ldr r1, _08084D54  @ =0x00000B08
	add r0, r6, r1
	ldrh r0, [r0]
	lsl r5, r0, #1
	ldr r4, _08084D58  @ =0x000018B0
	add r0, r6, r4
	add r0, r5, r0
	ldrh r0, [r0]
	mov r3, #254
	and r3, r3, r0
	ldr r0, _08084D5C  @ =0x00000BFE
	add r2, r6, r0
	ldr r1, _08084D60  @ =gUnknown_081676B2
	ldr r4, _08084D64  @ =0x00000968
	add r0, r6, r4
	mov r4, #0
	ldrsh r0, [r0, r4]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08084CCE
	ldr r0, _08084D68  @ =gUnknown_081677FC
	add r0, r3, r0
	ldrh r3, [r0]
_08084CCE:
	ldr r1, _08084D6C  @ =gUnknown_0816798C
	lsr r0, r3, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _08084D70  @ =0x000018D0
	add r0, r6, r1
	add r0, r5, r0
	ldrh r5, [r0]
	ldr r0, _08084D74  @ =0x0000097C
	add r1, r6, r0
	mov r0, #4
	strh r0, [r1]
	ldr r6, _08084D78  @ =gUnknown_02018000
	add r7, r1, #0
_08084CEC:
	add r0, r5, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	ldr r0, _08084D7C  @ =0x00001FFF
	and r0, r0, r5
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	ldr r1, _08084D80  @ =gUnknown_0201C000
	add r0, r0, r1
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r0, r5, #0
	add r0, r0, #128
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	mov r1, #128
	lsl r1, r1, #1
	add r0, r5, r1
	bl sub_08080380
	asr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r6
	ldrh r1, [r4]
	strh r1, [r0]
	add r4, r4, #2
	add r5, r5, #2
	ldrh r0, [r7]
	sub r0, r0, #1
	strh r0, [r7]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08084CEC
	pop {r4-r7}
	pop {r0}
	bx r0
_08084D50:
	.4byte gRam
_08084D54:
	.4byte 0x00000B08
_08084D58:
	.4byte 0x000018B0
_08084D5C:
	.4byte 0x00000BFE
_08084D60:
	.4byte gUnknown_081676B2
_08084D64:
	.4byte 0x00000968
_08084D68:
	.4byte gUnknown_081677FC
_08084D6C:
	.4byte gUnknown_0816798C
_08084D70:
	.4byte 0x000018D0
_08084D74:
	.4byte 0x0000097C
_08084D78:
	.4byte gUnknown_02018000
_08084D7C:
	.4byte 0x00001FFF
_08084D80:
	.4byte gUnknown_0201C000
	THUMB_FUNC_END sub_08084C94

