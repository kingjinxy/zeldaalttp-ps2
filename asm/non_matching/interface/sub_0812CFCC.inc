	.syntax unified
	THUMB_FUNC_START sub_0812CFCC
sub_0812CFCC: @ 0X0812CFCC
	push {r4, r5, r6, r7, lr}
	mov r7, r9
	mov r6, r8
	push {r6, r7}
	ldr r4, [pc, #304]
	ldr r0, [pc, #308]
	mov r9, r0
	ldr r1, [pc, #308]
	adds r0, r4, r1
	ldrh r1, [r0, #0]
	lsrs r1, r1, #1
	lsls r1, r1, #1
	mov r2, r9
	adds r0, r1, r2
	ldrh r2, [r0, #0]
	ldr r3, [pc, #296]
	adds r5, r3, #0
	adds r3, r2, r5
	ldr r6, [pc, #292]
	adds r0, r4, r6
	strh r3, [r0, #0]
	ldr r7, [pc, #292]
	adds r2, r2, r7
	ldr r3, [pc, #292]
	adds r0, r4, r3
	strh r2, [r0, #0]
	ldr r6, [pc, #288]
	mov r8, r6
	add r1, r8
	ldrh r1, [r1, #0]
	adds r2, r1, r5
	ldr r7, [pc, #284]
	adds r0, r4, r7
	strh r2, [r0, #0]
	ldr r0, [pc, #264]
	adds r1, r1, r0
	ldr r2, [pc, #276]
	adds r0, r4, r2
	strh r1, [r0, #0]
	ldr r2, [pc, #276]
	ldr r3, [pc, #276]
	adds r0, r4, r3
	ldrh r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r2
	ldrh r0, [r0, #0]
	adds r1, r5, r0
	ldr r6, [pc, #264]
	adds r0, r4, r6
	strh r1, [r0, #0]
	movs r7, #186
	lsls r7, r7, #5
	adds r0, r4, r7
	ldrh r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r2
	ldrh r0, [r0, #0]
	adds r5, r5, r0
	ldr r1, [pc, #244]
	adds r0, r4, r1
	strh r5, [r0, #0]
	ldr r6, [pc, #244]
	ldr r2, [pc, #244]
	adds r0, r4, r2
	ldrb r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r6
	ldrh r0, [r0, #0]
	ldr r3, [pc, #236]
	adds r1, r4, r3
	strh r0, [r1, #0]
	movs r7, #192
	lsls r7, r7, #1
	adds r0, r0, r7
	ldr r2, [pc, #228]
	adds r1, r4, r2
	strh r0, [r1, #0]
	ldr r5, [pc, #224]
	ldr r3, [pc, #228]
	adds r0, r4, r3
	ldrb r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r5
	ldrh r0, [r0, #0]
	ldr r7, [pc, #216]
	adds r1, r4, r7
	strh r0, [r1, #0]
	adds r0, #192
	adds r2, #4
	adds r1, r4, r2
	strh r0, [r1, #0]
	ldr r1, [pc, #208]
	ldr r7, [pc, #208]
	adds r3, r4, r7
	ldrb r0, [r3, #0]
	lsls r0, r0, #1
	adds r0, r0, r1
	movs r2, #136
	lsls r2, r2, #8
	adds r1, r2, #0
	ldrh r0, [r0, #0]
	adds r1, r1, r0
	ldr r7, [pc, #192]
	adds r0, r4, r7
	strh r1, [r0, #0]
	ldr r2, [pc, #192]
	ldrb r0, [r3, #0]
	lsrs r0, r0, #3
	lsls r0, r0, #1
	adds r0, r0, r2
	ldrh r0, [r0, #0]
	adds r1, r1, r0
	movs r2, #204
	lsls r2, r2, #4
	adds r0, r4, r2
	strh r1, [r0, #0]
	ldr r2, [pc, #172]
	ldr r3, [pc, #176]
	adds r0, r4, r3
	ldrb r1, [r0, #0]
	movs r3, #3
	adds r0, r3, #0
	ands r0, r1
	lsls r0, r0, #1
	adds r0, r0, r2
	ldrh r0, [r0, #0]
	adds r7, #16
	adds r1, r4, r7
	strh r0, [r1, #0]
	movs r1, #128
	lsls r1, r1, #1
	adds r0, r0, r1
	movs r2, #205
	lsls r2, r2, #4
	adds r1, r4, r2
	strh r0, [r1, #0]
	adds r7, #48
	adds r1, r4, r7
	ldrh r0, [r1, #0]
	subs r0, #1
	strh r0, [r1, #0]
	lsls r0, r0, #16
	cmp r0, #0
	bne.n _0812D1C6
	ldr r2, [pc, #124]
	adds r0, r4, r2
	ldrh r0, [r0, #0]
	cmp r0, #181
	beq.n _0812D102
	cmp r0, #188
	bne.n _0812D178
_0812D102:
	movs r0, #23
	b.n _0812D19E
	.byte 0x00
	.byte 0x00
	.4byte 0x03002230
	.4byte gUnknown_0822A9C8+0x174
	.4byte 0x0000173c
	.4byte 0xffff8000
	.4byte 0x00000cc2
	.4byte 0xffff8200
	.4byte 0x00000cc4
	.4byte gUnknown_0822A9C8+0x3de
	.4byte 0x00000cc6
	.4byte 0x00000cc8
	.4byte gUnknown_0822A9C8+0x648
	.4byte 0x0000173e
	.4byte 0x00000cca
	.4byte 0x00000ccc
	.4byte gUnknown_0822A9C8+0x14
	.4byte 0x00001742
	.4byte 0x00000cb6
	.4byte 0x00000cb8
	.4byte gUnknown_0822A9C8+0x24
	.4byte 0x00001743
	.4byte 0x00000cba
	.4byte gUnknown_0822A9C8+0x2a
	.4byte 0x00001744
	.4byte 0x00000cbe
	.4byte gUnknown_0822A9C8+0x12a
	.4byte gUnknown_0822A9C8+0xc
	.4byte 0x00001748
	.4byte 0x000009c8
_0812D178:
	ldr r7, [pc, #24]
	adds r0, r4, r7
	ldrh r0, [r0, #0]
	cmp r0, #221
	bne.n _0812D19C
	ldr r2, [pc, #20]
	adds r0, r4, r2
	movs r7, #0
	ldrsh r0, [r0, r7]
	cmp r0, #0
	bne.n _0812D19C
	strh r3, [r1, #0]
	b.n _0812D1A0
	.byte 0x00
	.byte 0x00
	.4byte 0x000009da
	.4byte 0x0000193c
_0812D19C:
	movs r0, #9
_0812D19E:
	strh r0, [r1, #0]
_0812D1A0:
	movs r0, #208
	lsls r0, r0, #4
	adds r2, r4, r0
	movs r1, #128
	lsls r1, r1, #3
	adds r0, r1, #0
	ldrh r3, [r2, #0]
	adds r0, r0, r3
	strh r0, [r2, #0]
	lsls r0, r0, #16
	ldr r1, [pc, #276]
	cmp r0, r1
	bls.n _0812D1BE
	movs r0, #0
	strh r0, [r2, #0]
_0812D1BE:
	ldrh r1, [r2, #0]
	ldr r7, [pc, #268]
	adds r0, r4, r7
	strh r1, [r0, #0]
_0812D1C6:
	ldr r0, [pc, #268]
	adds r3, r4, r0
	ldrh r0, [r3, #0]
	subs r0, #1
	strh r0, [r3, #0]
	lsls r0, r0, #16
	cmp r0, #0
	bne.n _0812D20E
	ldr r1, [pc, #256]
	adds r2, r4, r1
	ldrh r0, [r2, #0]
	adds r1, r0, #2
	cmp r1, #12
	bne.n _0812D1E4
	movs r1, #0
_0812D1E4:
	strh r1, [r2, #0]
	ldr r0, [pc, #244]
	asrs r1, r1, #1
	lsls r1, r1, #1
	adds r0, r1, r0
	ldrh r0, [r0, #0]
	strh r0, [r3, #0]
	ldr r0, [pc, #236]
	adds r1, r1, r0
	ldrh r1, [r1, #0]
	movs r3, #166
	lsls r3, r3, #8
	adds r2, r1, r3
	ldr r7, [pc, #228]
	adds r0, r4, r7
	strh r2, [r0, #0]
	ldr r0, [pc, #224]
	adds r1, r1, r0
	ldr r2, [pc, #224]
	adds r0, r4, r2
	strh r1, [r0, #0]
_0812D20E:
	ldr r3, [pc, #224]
	adds r0, r4, r3
	ldrh r1, [r0, #0]
	lsls r1, r1, #1
	ldr r7, [pc, #220]
	adds r3, r7, #0
	adds r2, r1, r3
	ldr r7, [pc, #216]
	adds r0, r4, r7
	strh r2, [r0, #0]
	ldr r0, [pc, #216]
	adds r1, r1, r0
	ldr r2, [pc, #216]
	adds r0, r4, r2
	strh r1, [r0, #0]
	subs r7, #2
	adds r0, r4, r7
	ldrh r0, [r0, #0]
	lsls r0, r0, #1
	adds r3, r0, r3
	adds r2, #2
	adds r1, r4, r2
	strh r3, [r1, #0]
	ldr r3, [pc, #188]
	adds r0, r0, r3
	adds r7, #8
	adds r1, r4, r7
	strh r0, [r1, #0]
	ldr r1, [pc, #188]
	adds r0, r4, r1
	ldrh r0, [r0, #0]
	lsls r0, r0, #1
	ldr r3, [pc, #184]
	adds r2, r0, r3
	adds r7, #4
	adds r1, r4, r7
	strh r2, [r1, #0]
	ldr r1, [pc, #176]
	adds r0, r0, r1
	ldr r2, [pc, #176]
	adds r1, r4, r2
	strh r0, [r1, #0]
	ldr r3, [pc, #176]
	adds r0, r4, r3
	ldrb r0, [r0, #0]
	cmp r0, #0
	beq.n _0812D2BE
	ldr r7, [pc, #168]
	adds r0, r4, r7
	ldrh r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	mov r2, r9
	adds r1, r0, r2
	ldr r3, [pc, #160]
	adds r2, r3, #0
	ldrh r1, [r1, #0]
	adds r3, r2, r1
	adds r7, #8
	adds r1, r4, r7
	strh r3, [r1, #0]
	add r0, r8
	ldrh r0, [r0, #0]
	adds r2, r2, r0
	ldr r1, [pc, #144]
	adds r0, r4, r1
	strh r2, [r0, #0]
	ldr r2, [pc, #140]
	adds r0, r4, r2
	ldrh r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r6
	ldrh r1, [r0, #0]
	ldr r3, [pc, #132]
	adds r0, r4, r3
	strh r1, [r0, #0]
	movs r6, #197
	lsls r6, r6, #5
	adds r0, r4, r6
	ldrh r0, [r0, #0]
	lsrs r0, r0, #1
	lsls r0, r0, #1
	adds r0, r0, r5
	ldrh r1, [r0, #0]
	adds r7, #10
	adds r0, r4, r7
	strh r1, [r0, #0]
_0812D2BE:
	pop {r3, r4}
	mov r8, r3
	mov r9, r4
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
	.4byte 0x0bff0000
	.4byte 0x00000cd2
	.4byte 0x00000d04
	.4byte 0x00000d06
	.4byte gUnknown_0822A9C8+0x14a
	.4byte gUnknown_0822A9C8+0x156
	.4byte 0x00000cd6
	.4byte 0x0000a660
	.4byte 0x00000cd8
	.4byte 0x00000cde
	.4byte 0xffffacc0
	.4byte 0x00000ce2
	.4byte 0xffffaec0
	.4byte 0x00000ce4
	.4byte 0x00000cea
	.4byte 0xffffa8c0
	.4byte 0xffffaac0
	.4byte 0x00000cee
	.4byte 0x00001898
	.4byte 0x0000189a
	.4byte 0xffff8000
	.4byte 0x000018a4
	.4byte 0x0000189e
	.4byte 0x000018aa
	.syntax divided
	.thumb

