	THUMB_FUNC_START sub_08071CCC
sub_08071CCC: @ 0x08071CCC
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	ldr r3, _08071D60  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldr r1, _08071D64  @ =0x00000C88
	add r2, r3, r1
	ldrh r1, [r0]
	ldrh r0, [r2]
	sub r1, r1, r0
	ldr r2, _08071D68  @ =0x00000C8A
	add r0, r3, r2
	ldrh r6, [r0]
	and r1, r1, r6
	lsl r1, r1, #16
	asr r1, r1, #16
	mov r0, #248
	mov r8, r0
	add r2, r1, #0
	and r2, r2, r0
	lsl r2, r2, #2
	ldr r0, _08071D6C  @ =0x0000096C
	add r0, r0, r3
	mov r9, r0
	mov r5, #128
	lsl r5, r5, #2
	add r0, r1, #0
	and r0, r0, r5
	lsl r0, r0, #4
	orr r2, r2, r0
	mov r4, #128
	lsl r4, r4, #1
	and r1, r1, r4
	lsl r1, r1, #3
	orr r2, r2, r1
	ldr r1, _08071D70  @ =0x000016C4
	add r0, r3, r1
	ldr r1, _08071D74  @ =0x00000C8C
	add r3, r3, r1
	ldrh r0, [r0]
	ldrh r1, [r3]
	sub r0, r0, r1
	and r0, r0, r6
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r0, #0
	mov r3, r8
	and r1, r1, r3
	lsr r1, r1, #3
	orr r2, r2, r1
	add r1, r0, #0
	and r1, r1, r5
	lsl r1, r1, #3
	orr r2, r2, r1
	and r0, r0, r4
	lsl r0, r0, #2
	orr r2, r2, r0
	mov r0, r9
	strh r2, [r0]
	mov r1, #0
	ldrsh r0, [r0, r1]
	lsl r0, r0, #1
	ldr r2, _08071D78  @ =gUnknown_02018000
	add r0, r0, r2
	ldrh r0, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r1}
	bx r1
_08071D60:
	.4byte gRam
_08071D64:
	.4byte 0x00000C88
_08071D68:
	.4byte 0x00000C8A
_08071D6C:
	.4byte 0x0000096C
_08071D70:
	.4byte 0x000016C4
_08071D74:
	.4byte 0x00000C8C
_08071D78:
	.4byte gUnknown_02018000
	THUMB_FUNC_END sub_08071CCC

