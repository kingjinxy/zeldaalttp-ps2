	THUMB_FUNC_START sub_0807E398
sub_0807E398: @ 0x0807E398
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r9, r1
	ldr r5, [r1]
	ldr r2, _0807E4EC  @ =gRam
	lsl r6, r5, #1
	ldr r3, _0807E4F0  @ =0x000018F0
	add r1, r2, r3
	add r1, r6, r1
	strh r0, [r1]
	ldr r1, _0807E4F4  @ =0x000018D0
	add r0, r2, r1
	add r0, r6, r0
	mov r3, #151
	lsl r3, r3, #4
	add r1, r2, r3
	ldrh r1, [r1]
	strh r1, [r0]
	asr r3, r5, #1
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r3
	asr r0, r0, #8
	mov r1, #255
	mov r8, r1
	and r3, r3, r1
	lsl r3, r3, #8
	orr r3, r3, r0
	ldr r0, _0807E4F8  @ =0x00000968
	add r7, r2, r0
	mov r1, #0
	ldrsh r0, [r7, r1]
	orr r3, r3, r0
	ldr r1, _0807E4FC  @ =0x000018B0
	add r0, r2, r1
	add r0, r6, r0
	strh r3, [r0]
	mov r0, #7
	and r0, r0, r5
	add r4, r2, #0
	cmp r0, #7
	bgt _0807E456
	ldr r2, _0807E500  @ =0x00000BFE
	add r1, r4, r2
	ldr r2, _0807E504  @ =gUnknown_081676B2
	mov r12, r2
	lsl r0, r0, #1
	add r0, r0, r12
	ldrh r1, [r1]
	ldrh r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _0807E456
	mov r0, r8
	and r3, r3, r0
	cmp r3, #24
	beq _0807E412
	cmp r3, #68
	bne _0807E41E
_0807E412:
	mov r1, #177
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0807E456
_0807E41E:
	ldr r1, _0807E508  @ =gUnknown_081677FC
	ldrh r0, [r7]
	lsl r0, r0, #16
	asr r0, r0, #17
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0807E50C  @ =0x00000974
	add r0, r4, r2
	strh r1, [r0]
	cmp r3, #24
	beq _0807E456
	cmp r3, #68
	beq _0807E456
	cmp r3, #26
	beq _0807E456
	cmp r3, #64
	beq _0807E456
	cmp r3, #70
	beq _0807E456
	ldr r3, _0807E510  @ =0x00000AA6
	add r2, r4, r3
	mov r0, r12
	add r1, r6, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	orr r0, r0, r1
	strh r0, [r2]
_0807E456:
	add r5, r5, #1
	ldr r1, _0807E514  @ =0x00000B08
	add r0, r4, r1
	strh r5, [r0]
	mov r2, r9
	str r5, [r2]
	ldr r3, _0807E50C  @ =0x00000974
	add r7, r4, r3
	mov r0, #0
	ldrsh r6, [r7, r0]
	cmp r6, #50
	beq _0807E534
	cmp r6, #8
	beq _0807E534
	ldr r1, _0807E4F8  @ =0x00000968
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #26
	bne _0807E528
	ldr r3, _0807E518  @ =0x000016D5
	add r0, r4, r3
	ldrb r0, [r0]
	strh r0, [r7]
	sub r5, r5, #1
	sub r1, r1, #3
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r3, _0807E51C  @ =0x00000978
	add r2, r4, r3
	strb r0, [r2]
	sub r1, r1, #1
	add r0, r4, r1
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r4, r3
	strb r1, [r0]
	ldrh r2, [r2]
	ldr r0, _0807E520  @ =0x00000ADC
	add r3, r4, r0
	mov r1, #150
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #3
	and r0, r0, r1
	lsl r0, r0, #1
	orr r0, r0, r2
	strh r0, [r3]
	mov r3, #255
	and r3, r3, r0
	mov r2, #0
	ldrsh r1, [r7, r2]
	cmp r3, r1
	beq _0807E4CC
	mov r0, #2
	eor r3, r3, r0
	cmp r3, r1
	bne _0807E534
_0807E4CC:
	ldr r3, _0807E500  @ =0x00000BFE
	add r2, r4, r3
	ldr r1, _0807E504  @ =gUnknown_081676B2
	lsl r0, r5, #1
	add r0, r0, r1
	ldrh r1, [r2]
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r2]
	ldr r0, _0807E524  @ =0x000016BE
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	mov r0, #0
	b _0807E53E
	.byte 0x00
	.byte 0x00
_0807E4EC:
	.4byte gRam
_0807E4F0:
	.4byte 0x000018F0
_0807E4F4:
	.4byte 0x000018D0
_0807E4F8:
	.4byte 0x00000968
_0807E4FC:
	.4byte 0x000018B0
_0807E500:
	.4byte 0x00000BFE
_0807E504:
	.4byte gUnknown_081676B2
_0807E508:
	.4byte gUnknown_081677FC
_0807E50C:
	.4byte 0x00000974
_0807E510:
	.4byte 0x00000AA6
_0807E514:
	.4byte 0x00000B08
_0807E518:
	.4byte 0x000016D5
_0807E51C:
	.4byte 0x00000978
_0807E520:
	.4byte 0x00000ADC
_0807E524:
	.4byte 0x000016BE
_0807E528:
	ldr r2, _0807E530  @ =0x000016BE
	add r1, r4, r2
	mov r0, #1
	b _0807E53A
_0807E530:
	.4byte 0x000016BE
_0807E534:
	ldr r3, _0807E54C  @ =0x000016BE
	add r1, r4, r3
	mov r0, #0
_0807E53A:
	strb r0, [r1]
	add r0, r6, #0
_0807E53E:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0807E54C:
	.4byte 0x000016BE
	THUMB_FUNC_END sub_0807E398

