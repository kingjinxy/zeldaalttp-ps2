	THUMB_FUNC_START sub_08132F78
sub_08132F78: @ 0x08132F78
	push {r4,r5,lr}
	ldr r1, _0813300C  @ =gUnknown_0822BBB4
	ldrh r0, [r1, #28]
	mov r4, #7
	lsl r0, r0, #1
	ldr r3, _08133010  @ =gUnknown_02030400
	add r2, r0, r3
	add r5, r1, #0
	ldr r1, _08133014  @ =gUnknown_02000E60
	ldr r3, _08133018  @ =gUnknown_02000A60
_08132F8C:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08132F8C
	ldrh r0, [r5, #28]
	mov r4, #7
	lsl r0, r0, #1
	ldr r1, _08133010  @ =gUnknown_02030400
	add r2, r0, r1
	ldr r1, _0813301C  @ =gUnknown_02000E80
	ldr r3, _08133020  @ =gUnknown_02000A80
_08132FAE:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08132FAE
	ldrh r0, [r5, #28]
	mov r4, #7
	lsl r0, r0, #1
	ldr r3, _08133010  @ =gUnknown_02030400
	add r2, r0, r3
	ldr r1, _08133024  @ =gUnknown_02000EA0
	ldr r3, _08133028  @ =gUnknown_02000AA0
_08132FD0:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08132FD0
	ldrh r0, [r5, #42]
	mov r4, #7
	lsl r0, r0, #1
	ldr r2, _08133010  @ =gUnknown_02030400
	add r1, r0, r2
	ldr r3, _0813302C  @ =gUnknown_02000EC0
	ldr r2, _08133030  @ =gUnknown_02000AC0
_08132FF2:
	ldrh r0, [r1]
	strh r0, [r2]
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r3, r3, #2
	add r2, r2, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08132FF2
	pop {r4,r5}
	pop {r0}
	bx r0
_0813300C:
	.4byte gUnknown_0822BBB4
_08133010:
	.4byte gUnknown_02030400
_08133014:
	.4byte gUnknown_02000E60
_08133018:
	.4byte gUnknown_02000A60
_0813301C:
	.4byte gUnknown_02000E80
_08133020:
	.4byte gUnknown_02000A80
_08133024:
	.4byte gUnknown_02000EA0
_08133028:
	.4byte gUnknown_02000AA0
_0813302C:
	.4byte gUnknown_02000EC0
_08133030:
	.4byte gUnknown_02000AC0
	THUMB_FUNC_END sub_08132F78

