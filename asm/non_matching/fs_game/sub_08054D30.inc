	THUMB_FUNC_START sub_08054D30
sub_08054D30: @ 0x08054D30
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #112
	ldr r1, [r7]
	ldr r2, [r7]
	add r0, r2, #0
	add r2, r2, #112
	ldrh r3, [r2]
	sub r0, r3, #1
	add r2, r1, #0
	add r1, r1, #112
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r0, #0
	orr r3, r3, r2
	add r2, r3, #0
	strh r2, [r1]
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	ldr r1, _08054E8C  @ =0x0000FFFF
	cmp r0, r1
	bne _08054D72
	b _08054E94
_08054D72:
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	beq _08054D80
	b _08054E88
_08054D80:
	ldr r0, _08054E90  @ =gUnknown_03005AD8
	ldrb r1, [r0]
	cmp r1, #111
	bls _08054D8A
	b _08054E88
_08054D8A:
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	add r0, r1, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08054E88
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrh r0, [r1]
	str r0, [r7, #8]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #110
	ldrh r0, [r1]
	str r0, [r7, #12]
	bl sub_0800099C
	add r1, r0, #0
	add r0, r1, #0
	ldr r1, [r7, #8]
	bl __umodsi3
	add r1, r0, #0
	lsl r0, r1, #4
	add r1, r0, #0
	add r1, r1, #8
	str r1, [r7, #8]
	bl sub_0800099C
	add r1, r0, #0
	add r0, r1, #0
	ldr r1, [r7, #12]
	bl __umodsi3
	add r1, r0, #0
	lsl r0, r1, #4
	add r1, r0, #0
	add r1, r1, #8
	str r1, [r7, #12]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #104
	ldr r3, [r7, #8]
	add r2, r3, #0
	ldrh r3, [r1]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #106
	ldr r3, [r7, #12]
	add r2, r3, #0
	ldrh r3, [r1]
	add r1, r2, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #82
	add r2, r0, #0
	add r0, r0, #82
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl sub_0804C9C8
	ldr r1, [r7, #4]
	add r0, r1, #0
	bl 0x08008DD8
_08054E88:
	b _08054ECE
	.byte 0x00
	.byte 0x00
_08054E8C:
	.4byte 0x0000FFFF
_08054E90:
	.4byte gUnknown_03005AD8
_08054E94:
	ldr r0, _08054ED8  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08054ED8  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _08054EDC  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	bl DeleteThisEntity
_08054ECE:
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08054ED8:
	.4byte gUnknown_0201F000
_08054EDC:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08054D30

