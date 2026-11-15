	THUMB_FUNC_START sub_08015FE4
sub_08015FE4: @ 0x08015FE4
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	add r4, r0, #0
	add r6, r1, #0
	add r5, r2, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	lsl r6, r6, #16
	lsr r6, r6, #16
	lsl r5, r5, #16
	lsr r5, r5, #16
	ldr r0, _0801606C  @ =gUnknown_02038000
	mov r9, r0
	mov r1, #128
	lsl r1, r1, #5
	bl zero_memory
	ldr r2, _08016070  @ =gUnknown_081465E0
	lsl r1, r4, #2
	add r0, r1, r2
	ldrh r0, [r0]
	mov r8, r0
	lsr r0, r0, #4
	mov r8, r0
	lsl r4, r4, #1
	add r4, r4, #1
	lsl r4, r4, #1
	add r4, r4, r2
	ldrh r4, [r4]
	lsr r4, r4, #4
	ldr r0, _08016074  @ =gUnknown_0814627C
	add r1, r1, r0
	ldr r0, [r1]
	mov r1, #1
	bl sub_0801484C
	lsl r5, r5, #6
	add r5, r5, r6
	lsl r5, r5, #1
	ldr r0, _08016078  @ =gUnknown_0201F024
	add r0, r5, r0
	mov r2, #128
	lsl r2, r2, #8
	add r1, r2, #0
	orr r4, r4, r1
	mov r1, r9
	mov r2, r8
	add r3, r4, #0
	bl sub_0800BAE4
	ldr r0, _0801607C  @ =gUnknown_0200B324
	add r5, r5, r0
	ldr r1, _08016080  @ =gUnknown_02038800
	add r0, r5, #0
	mov r2, r8
	add r3, r4, #0
	bl sub_0800BAE4
	bl sub_080160F8
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
_0801606C:
	.4byte gUnknown_02038000
_08016070:
	.4byte gUnknown_081465E0
_08016074:
	.4byte gUnknown_0814627C
_08016078:
	.4byte gUnknown_0201F024
_0801607C:
	.4byte gUnknown_0200B324
_08016080:
	.4byte gUnknown_02038800
	THUMB_FUNC_END sub_08015FE4

