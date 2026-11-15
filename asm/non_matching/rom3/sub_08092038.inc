	THUMB_FUNC_START sub_08092038
sub_08092038: @ 0x08092038
	push {r4,lr}
	ldr r2, _0809210C  @ =0x0000298C
	ldr r0, _08092110  @ =gUnknown_02018000
	add r3, r2, r0
	ldr r1, _08092114  @ =gUnknown_08155B4E
	ldr r4, _08092118  @ =0x00007188
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809211C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092120  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092124  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08092128  @ =0x0000718E
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _0809212C  @ =0x00002A14
	ldr r4, _08092110  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _08092130  @ =0x00007168
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809211C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092120  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092124  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08092134  @ =0x0000716E
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _08092138  @ =0x00002A94
	ldr r4, _08092110  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _0809213C  @ =0x00007170
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809211C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092120  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092124  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _08092140  @ =0x00007176
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	ldr r2, _08092144  @ =0x00002B14
	ldr r4, _08092110  @ =gUnknown_02018000
	add r3, r2, r4
	ldr r4, _08092148  @ =0x00007178
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _0809211C  @ =gUnknown_02018002
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092120  @ =gUnknown_02018040
	add r3, r2, r0
	add r4, r4, #2
	add r0, r1, r4
	ldrh r0, [r0]
	strh r0, [r3]
	ldr r0, _08092124  @ =gUnknown_02018042
	add r2, r2, r0
	ldr r3, _0809214C  @ =0x0000717E
	add r1, r1, r3
	ldrh r0, [r1]
	strh r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809210C:
	.4byte 0x0000298C
_08092110:
	.4byte gUnknown_02018000
_08092114:
	.4byte gUnknown_08155B4E
_08092118:
	.4byte 0x00007188
_0809211C:
	.4byte gUnknown_02018002
_08092120:
	.4byte gUnknown_02018040
_08092124:
	.4byte gUnknown_02018042
_08092128:
	.4byte 0x0000718E
_0809212C:
	.4byte 0x00002A14
_08092130:
	.4byte 0x00007168
_08092134:
	.4byte 0x0000716E
_08092138:
	.4byte 0x00002A94
_0809213C:
	.4byte 0x00007170
_08092140:
	.4byte 0x00007176
_08092144:
	.4byte 0x00002B14
_08092148:
	.4byte 0x00007178
_0809214C:
	.4byte 0x0000717E
	THUMB_FUNC_END sub_08092038

