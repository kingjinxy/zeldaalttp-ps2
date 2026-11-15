	THUMB_FUNC_START sub_08027F98
sub_08027F98: @ 0x08027F98
	push {r4,r5,lr}
	add r5, r0, #0
	add r2, r5, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	add r0, r0, #46
	mov r4, #0
	strb r4, [r0]
	ldr r1, _08028000  @ =gUnknown_0813CF70
	ldrb r0, [r5, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [r5, #72]
	mov r0, #128
	lsl r0, r0, #1
	str r0, [r5, #12]
	ldrb r0, [r5, #20]
	add r0, r0, #1
	strb r0, [r5, #20]
	add r0, r5, #0
	add r0, r0, #82
	ldrb r0, [r0]
	ldrb r1, [r5, #11]
	bl sub_08012F84
	add r2, r0, #0
	str r2, [r5, #120]
	str r2, [r5, #108]
	str r4, [r5, #112]
	ldrh r1, [r2]
	ldr r0, _08028004  @ =0x0000FFFE
	cmp r1, r0
	bne _08027FF4
	ldrh r0, [r2, #2]
	str r0, [r5, #112]
	add r0, r2, #4
	str r0, [r5, #120]
	str r0, [r5, #108]
_08027FF4:
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _08028008
	bl sub_08013D20
	b _0802800A
_08028000:
	.4byte gUnknown_0813CF70
_08028004:
	.4byte 0x0000FFFE
_08028008:
	mov r0, #0
_0802800A:
	str r0, [r5, #96]
	ldr r3, _08028048  @ =gUnknown_0813CE8C
	ldr r2, _0802804C  @ =gUnknown_03006C80
	ldrb r0, [r2, #1]
	lsl r0, r0, #1
	add r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	mov r1, #15
	and r1, r1, r0
	lsl r0, r0, #4
	orr r0, r0, r1
	strb r0, [r5, #30]
	ldrb r0, [r2, #1]
	lsl r0, r0, #2
	add r0, r0, r3
	ldrh r1, [r0]
	add r0, r5, #0
	bl sub_0802C070
	add r0, r5, #0
	bl sub_08028170
	ldrb r1, [r5, #10]
	add r0, r5, #0
	bl 0x08003870
	pop {r4,r5}
	pop {r0}
	bx r0
_08028048:
	.4byte gUnknown_0813CE8C
_0802804C:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08027F98

