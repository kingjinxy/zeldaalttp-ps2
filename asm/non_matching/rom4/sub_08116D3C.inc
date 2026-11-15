	THUMB_FUNC_START sub_08116D3C
sub_08116D3C: @ 0x08116D3C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r3, _08116D7C  @ =gRam
	ldr r1, _08116D80  @ =0x00000E33
	add r0, r3, r1
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _08116D8C
	strb r2, [r0]
	ldr r4, _08116D84  @ =0x00000E29
	add r1, r3, r4
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	bne _08116D8C
	ldr r1, _08116D88  @ =0x00000E15
	add r0, r3, r1
	add r0, r5, r0
	strb r2, [r0]
	b _08116E4C
	.byte 0x00
	.byte 0x00
_08116D7C:
	.4byte gRam
_08116D80:
	.4byte 0x00000E33
_08116D84:
	.4byte 0x00000E29
_08116D88:
	.4byte 0x00000E15
_08116D8C:
	mov r0, #16
	bl sub_080CF3A0
	add r0, r5, #0
	bl sub_080C177C
	ldr r1, _08116E5C  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r4, r1, r3
	ldrh r2, [r4]
	add r3, r3, #12
	add r0, r1, r3
	mov r3, #0
	strh r2, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r2, r1, r0
	strb r3, [r2]
	ldr r3, _08116E60  @ =0x00000E29
	add r0, r1, r3
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #26
	lsr r7, r0, #24
	mov r8, r1
	ldr r4, _08116E64  @ =gUnknown_03003E74
	mov r9, r4
	mov r10, r2
_08116DC6:
	ldr r1, _08116E68  @ =0x0000096C
	add r1, r1, r8
	ldr r0, _08116E6C  @ =gUnknown_0817EEBE
	add r0, r7, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _08116E70  @ =gUnknown_0817EECE
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _08116E74  @ =gUnknown_03002B90
	strh r1, [r0]
	ldr r1, _08116E78  @ =0x00000968
	add r1, r1, r8
	ldr r0, _08116E7C  @ =gUnknown_0817EEDE
	add r0, r7, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _08116E80  @ =gUnknown_0817EEEE
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r2, _08116E84  @ =0x00000964
	add r2, r2, r8
	strh r1, [r2]
	mov r1, r9
	ldrh r0, [r1]
	ldrh r1, [r2]
	ldr r3, _08116E74  @ =gUnknown_03002B90
	ldrh r2, [r3]
	ldr r3, _08116E88  @ =gUnknown_0817EE9E
	add r3, r7, r3
	ldrb r3, [r3]
	ldr r6, _08116E8C  @ =gUnknown_0817EEAE
	add r6, r7, r6
	ldr r4, _08116E90  @ =0x00001724
	add r4, r4, r8
	ldrb r4, [r4]
	mov r5, #4
	orr r4, r4, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r3, r10
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bne _08116DC6
_08116E4C:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08116E5C:
	.4byte gRam
_08116E60:
	.4byte 0x00000E29
_08116E64:
	.4byte gUnknown_03003E74
_08116E68:
	.4byte 0x0000096C
_08116E6C:
	.4byte gUnknown_0817EEBE
_08116E70:
	.4byte gUnknown_0817EECE
_08116E74:
	.4byte gUnknown_03002B90
_08116E78:
	.4byte 0x00000968
_08116E7C:
	.4byte gUnknown_0817EEDE
_08116E80:
	.4byte gUnknown_0817EEEE
_08116E84:
	.4byte 0x00000964
_08116E88:
	.4byte gUnknown_0817EE9E
_08116E8C:
	.4byte gUnknown_0817EEAE
_08116E90:
	.4byte 0x00001724
	THUMB_FUNC_END sub_08116D3C

